#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
#include<iterator>
#include<sstream>
#include<deque>
#include<cassert>


float ln(float x);
double pow_approx(double a, double b);
uint64_t leastSquareRegression(float logX[], float logY[], uint64_t length, struct avg *avgResult, struct skew *skewResult);
void averageLogData(float logX[], float logY[], uint64_t length, struct avg* avgResult);
double skewEstimation(uint32_t initAccessTime[], uint64_t length);
std::vector<uint32_t> GetMaxNumbers(std::vector<uint32_t> input, int k);

struct skew{
    float theta;
    float r2Score;
};

struct avg{
    float avgLogX;
    float avgLogY;
};

float ln(float x) {
    //from 
    //https://quadst.rip/ln-approx.html
  unsigned int bx = * (unsigned int *) (&x);
  unsigned int ex = bx >> 23;
  signed int t = (signed int)ex-(signed int)127;
  unsigned int s = (t < 0) ? (-t) : t;
  bx = 1065353216 | (bx & 8388607);
  x = * (float *) (&bx);
  return -1.49278+(2.11263+(-0.729104+0.10969*x)*x)*x+0.6931471806*t;
}

double pow_approx(double a, double b) {
  // from
  // http://martin.ankerl.com/2012/01/25/optimized-approximative-pow-in-c-and-cpp/

  // calculate approximation with fraction of the exponent
  int e = (int)b;
  union {
    double d;
    int x[2];
  } u = {a};
  u.x[1] = (int)((b - (double)e) * (double)(u.x[1] - 1072632447) + 1072632447.);
  u.x[0] = 0;

  // exponentiation by squaring with the exponent's integer part
  // double r = u.d makes everything much slower, not sure why
  // TODO: use popcount?
  double r = 1.;
  while (e) {
    if (e & 1) r *= a;
    a *= a;
    e >>= 1;
  }

  return r * u.d;
}

uint64_t leastSquareRegression(float logX[], float logY[], uint64_t length, struct avg *avgResult,struct skew *skewResult){
    float skewNumerator = 0.; 
    float skewDenominator = 0.;
    float RSquareNumerator = 0.; 
    float RSquareDenominator = 0.;
    
    for(uint64_t i = 0; i < length; i++){
        skewNumerator += (logX[i] - avgResult->avgLogX) * (logY[i] - avgResult->avgLogY);
        skewDenominator += pow_approx((logX[i] - avgResult->avgLogX), 2);
    }
    if(skewDenominator != 0.){
        skewResult->theta = - skewNumerator / skewDenominator;
    }
    else{
        skewResult->theta = 0.;
    }

    float beta = avgResult->avgLogY - (skewResult->theta * avgResult->avgLogX);
   
    float predictLogY[30] = {0.};

    for(uint64_t i = 0; i < length; i++){
        predictLogY[i] = skewResult->theta * logX[i] + beta;
    }

    for(uint64_t i = 0; i < length; i++){
        RSquareNumerator += pow_approx((predictLogY[i] - avgResult->avgLogY), 2);
        RSquareDenominator += pow_approx((logY[i] - avgResult->avgLogY), 2);
    }
    skewResult->r2Score = RSquareNumerator/RSquareDenominator;

    return 0;
}

void logTransform(uint32_t init[], float logX[], float logY[], uint64_t length){
    //transform the init data into log-scaled
    for(uint64_t i = 0; i < length; i++){
        logX[i] = ln(static_cast<float>(i+1));
        logY[i] = ln(static_cast<float>(init[i]));
    }
}

void logTransform(uint32_t init[], float logY[], uint64_t length){
    //transform the init data into log-scaled
    for(uint64_t i = 0; i < length; i++){
        logY[i] = ln(static_cast<float>(init[i]));
    }
}

void averageLogData(float logX[], float logY[], uint64_t length, struct avg* avgResult){
    //acquire the average x and average y in log-scale
    float tmpX = 0.;
    float tmpY = 0.;
    for(uint64_t i = 0; i< length; i++){
        tmpX += logX[i];
        tmpY += logY[i];
    }
    avgResult->avgLogX = tmpX/length;
    avgResult->avgLogY = tmpY/length;
}   

double skewEstimation(uint32_t initAccessTime[], uint64_t length){

    assert(length == 30);

    float logRank[30]={0.000436, 0.693583, 1.099032, 1.386730, 1.609315, 1.792179, 1.945606, 2.079878, 2.196778, 2.302462,
                       2.398217, 2.485326, 2.565077, 2.638753, 2.707641, 2.773025, 2.832957, 2.889925, 2.944089, 2.995610,
                       3.044648, 3.091364, 3.135919, 3.178473, 3.219188, 3.258224, 3.295741, 3.331900, 3.366862, 3.400788 };
    
    float logAccessTime[30]={0.};

    logTransform(initAccessTime, logAccessTime, length);

    struct skew skewResult = {0, 0}; 
    struct avg avgResult {0, 0};

    averageLogData(logRank, logAccessTime, length, &avgResult);

    leastSquareRegression(logRank, logAccessTime, length, &avgResult, &skewResult);
    printf("r2Score = %f ", skewResult.r2Score);
    printf("theta = %f\n", skewResult.theta);
    if(skewResult.r2Score < 0.6){
        /*if(initAccessTime[0] - initAccessTime[length - 1] <= 30){
           printf("skewResult.theta = 0\n"); 
        }*/
        skewResult.theta = 0;
    }else{
        if(skewResult.theta < 0) skewResult.theta = 0;
        else if(skewResult.theta > 0.99) skewResult.theta = 0.99; 
    }

    return skewResult.theta;
}

void uptodown(uint32_t* heap, int k, int pos)
{
	int i = pos;
	int j = 2 * i + 1;
	while (j < k)
	{
		if (j < k - 1 && heap[j] > heap[j + 1])
			j++;
		if (heap[i] <= heap[j])
			break;
		else
		{
			std::swap(heap[i], heap[j]);
			i = j;
			j = 2 * i + 1;
		}
	}
}

/*void create_heap(std::vector<uint32_t>& heap, int k)
{
	int pos = k / 2 - 1;
	for (int i = pos; i >= 0; i--)
	{
		uptodown(heap, k, i);
	}
}

std::vector<uint32_t> GetMaxNumbers(std::vector<uint32_t> input, int k) {
	std::vector<uint32_t> nums = input;
	std::vector<uint32_t> heap(k, 0);
	for (int i = 0; i < k; ++i)
	{
		heap[i] = nums[i];
	}
	create_heap(heap, k);
	for (int i = k; i < nums.size(); ++i)
	{
		if (nums[i] > heap[0])
		{
			heap[0] = nums[i];
			uptodown(heap, k, 0);
		}
	}
    sort(heap.begin(), heap.end(), std::greater<int>());
    return heap;
}*/
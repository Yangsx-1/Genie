#include<math.h>
#include<stdint.h>
#include<stdio.h>
#include<stdlib.h>
#include <stddef.h>
#include "mica/util/rand.h"

double h(struct highlySkewZipf *z, double x);
double hinv(struct highlySkewZipf *z,double x);
void NewZipfHighlySkew(struct highlySkewZipf *z, double s, double v, uint64_t imax, uint64_t seed);
//NewZipfHighlySkew(seed,theta,1,max)
uint64_t nextUint64(struct highlySkewZipf *z);

// A Zipf generates Zipf distributed variates.
struct highlySkewZipf{ 
	//uint64_t state;//seed
	double imax;     
	double v;       
	double q;       
	double s;      
	double oneminusQ;
	double oneminusQinv;
	double hxm;         
	double hx0minusHxm;
	::mica::util::Rand* inner_rand;
};

double h(struct highlySkewZipf *z, double x){
    return exp(z->oneminusQ * log(z->v+x)) * z->oneminusQinv;
}

double hinv(struct highlySkewZipf *z, double x){
	return exp(z->oneminusQinv * log(z->oneminusQ * x)) - z->v;
}


// NewZipf returns a Zipf variate generator.
// The generator generates values k ∈ [0, imax]
// such that P(k) is proportional to (v + k) ** (-s).
// Requirements: s > 1 and v >= 1.
void NewZipfHighlySkew(struct highlySkewZipf *z, double s, double v, uint64_t imax, uint64_t seed) {
	//init the zipf generator
	//struct Zipf *z;
	if (s <= 1.0 || v < 1) {
		return;
	}

	//srand(r);
	//z->state = r;
	z->imax = (double)imax;
	z->v = v;
	z->q = s;
	z->oneminusQ = 1.0 - z->q;
	z->oneminusQinv = 1.0 / z->oneminusQ;
	z->hxm = h(z, (z->imax + 0.5));
	z->hx0minusHxm = h(z, 0.5) - exp(log(z->v)*(-z->q)) - z->hxm;
	z->s = 1 - hinv(z, (h(z,1.5) - exp(-z->q * log(z->v+1.0))));
	z->inner_rand = new ::mica::util::Rand(seed);
	return;
	//return z;
}
// Uint64 returns a value drawn from the Zipf distribution described
// by the Zipf object.
uint64_t nextUint64(struct highlySkewZipf *z){
	double k = 0.;

	for(;;){
		uint32_t randNumber = z->inner_rand->next_u32() & RAND_MAX;
		//double r = (double)randNumber/(double)(RAND_MAX + 1.0);
		double r = (double)randNumber/(double)RAND_MAX;
		//double r = mehcached_rand_d(&z->state);
		//uint32_t u = rand();
		
		double ur = z->hxm + r*z->hx0minusHxm;
		double x = hinv(z,ur);
		k = floor(x + 0.5);
		if ((k-x) <= z->s){
			break;
		}
		if (ur >= (h(z,k+0.5)-exp(-log(k+z->v)*z->q))){
			break;
		}
	}
	return (uint64_t)k;
}
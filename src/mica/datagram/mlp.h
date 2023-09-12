#include<math.h>
#include<cstdint>
#include<cassert>

typedef struct{
    double * data;
    uint64_t dim;
} Vector;

Vector* NewVector(uint64_t dim);
void DeleteVector(Vector * vector);
void MultilayerPerceptron(const double * input, const uint64_t input_length, double* output);

const float MEAN[5] = {//updated
0.52348975,   0.73545038,  59.18230852, 213.38727077,  18.21981392
};

const float STANDARD_ERROR[5] = {//updated
0.341835361, 0.158992028, 38.6276473, 297.237435, 8.09324871
};

const uint8_t INPUT_LAYER_DIM = 5;
const uint8_t FIRST_HIDDEN_LAYER_DIM = 8;
const uint8_t SECOND_HIDDEN_LAYER_DIM = 6;

double W_I_TO_1[5][8] = {//updated
{ 0.5761201,  -0.07853618,  0.16017947,  0.15673998,  0.12200494,  0.8614333,
  -0.04675673,  0.27261117},
{ -0.15623489, -0.01837648,  0.024627,    0.19521521,  0.01357667, -0.17459081,
  -0.01788368,  0.1341187 },
{ -0.05010467,  0.00567974, -0.07350099,  0.08169765, -0.3362716,   0.07562058,
  -0.34599072,  0.0646852 },
{ -0.345455,    0.00834285, -0.31533787,  1.4467866,   1.218296,    0.05395836,
  -2.4668677,   0.36958116},
{ -0.1386463,  -0.31504908, -0.62766546, -0.5121328,   0.09121305,  0.14348844,
   0.35338038,  0.23218372}
};


double B_I_TO_1[8] = {//updated
 -0.58291296, -0.70027457,  0.61276995,  0.21925417,  0.85070828,  0.0227995,
 -1.76590272, -0.77290206};


double W_1_TO_2[8][6] = {//updated
{ 0.26733792,  -0.01903832,  0.21101153,  -0.71117544,  0.19261709, -0.98063487},
{ -0.57092655, -0.7070138,   0.89368236,  -0.17703044, -2.2142885,  -0.39923236},
{ 0.89582825,  -1.1980982,   0.8816415,   -2.8571203,  -0.76402694, -0.60208625},
{ 0.37891686,  -0.72842854,  0.2566797,   -0.5272205,  -0.28754053,  0.38504583},
{ 1.7593602,   0.76342976,   -0.49143022, -0.3338422,  -0.01061821, -0.52259505},
{ -0.37831616, -0.10256299,  -0.10408155,  0.9487362,  -0.4569668,   0.8942173 },
{ -0.2379626,  -2.615074,    -0.02382488, -1.0677663,   0.02865898,  0.8930635 },
{ -0.94156915, 0.36078367,   -0.5436194,  -0.24907279, -0.16353172, -1.3750272 }
};


double B_1_TO_2[6] = {//updated
0.51601666, -0.49175753, -0.03802931, -1.09647317,  0.54202281, -0.02233504};


double W_2_TO_O[6] = {//updated
1.944766, 1.8057691, -1.540466, 1.0283875, 1.9757848, 2.3128555};


double B_2_TO_O = 0.59091409;//updated

Vector* NewVector(uint64_t dim){
    Vector * vector = (Vector *) malloc(sizeof(Vector));
    vector->dim = dim;
    vector->data = (double *) malloc(dim * sizeof(double));
    return vector;
}

void DeleteVector(Vector * vector){
    if(vector){
        if(vector->data)
            free(vector->data);
        free(vector);
    }
}

/**********************/

void MultilayerPerceptron(const double * input, const uint64_t input_length, double* output){
    assert(input_length == 5);
    Vector * scaled = NewVector(5);
    for(int i = 0; i < 5; ++i)
        scaled->data[i] = (input[i] - MEAN[i])/STANDARD_ERROR[i];

    Vector * hidden1 = NewVector(FIRST_HIDDEN_LAYER_DIM);
    Vector * hidden2 = NewVector(SECOND_HIDDEN_LAYER_DIM);
    for(int i = 0; i < FIRST_HIDDEN_LAYER_DIM; ++i){
        double temp = 0.;
        for(int j = 0; j < 5; ++j)
            temp += W_I_TO_1[j][i] * scaled->data[j];
        hidden1->data[i] = tanh(temp + B_I_TO_1[i]);
    }

    for(int i = 0; i < SECOND_HIDDEN_LAYER_DIM; ++i){
        double temp = 0.;
        for(int j = 0; j < FIRST_HIDDEN_LAYER_DIM; ++j)
            temp += W_1_TO_2[j][i] * hidden1->data[j];
        hidden2->data[i] = tanh(temp + B_1_TO_2[i]);
    }

    *output = B_2_TO_O;
    for(int i = 0; i < SECOND_HIDDEN_LAYER_DIM; ++i)
        *output += W_2_TO_O[i] * hidden2->data[i];
    DeleteVector(hidden1);
    DeleteVector(hidden2);
}

#include<math.h>
#include<bits/stdint-uintn.h>
#include<cassert>

typedef struct{
    double * data;
    uint64_t dim;
} Vector;

Vector* NewVector(uint64_t dim);
void DeleteVector(Vector * vector);
void MultilayerPerceptron(const double * input, const uint64_t input_length, double* output);

const float MEAN[5] = {
 0.50635351, 0.74236516, 35.45606483, 57.11420613, 19.59386579
};

const float STANDARD_ERROR[5] = {
0.33712949, 0.1582838, 18.245558, 38.16216512, 7.00346527
};

const uint8_t INPUT_LAYER_DIM = 5;
const uint8_t FIRST_HIDDEN_LAYER_DIM = 8;
const uint8_t SECOND_HIDDEN_LAYER_DIM = 6;

double W_I_TO_1[5][8] = {
{  0.76247969,  0.01857931, -0.11168198,  0.01392696,  0.04984317,  1.1478486,
  -0.01093231, -0.56971492},
{  0.0452522,  -0.08034003,  0.03969132,  0.0319688,  -0.07221914, -0.14237353,
   0.12110994, -0.03555617},
{ -0.09866839, -0.01182465, -0.2780485,   0.43128047,  0.00478645,  0.33458204,
   0.00451378,  0.18940685},
{ -0.27012706,  0.0397711,  -0.58383536,  0.92180542, -0.09623282,  0.16719986,
  -0.21405785,  0.22246873},
{ -0.05578781, -0.184276,   -0.7294853,  -0.37613991,  0.14234153,  2.65036031,
  -0.23180318,  0.83589667}
};

double B_I_TO_1[8] = {
-0.98170304, -0.56801443,  0.49154259, -1.15217791,  0.88081253, -1.5452366,
 -0.92585901, -0.63351057 };

double W_1_TO_2[8][6] = {
 {0.42223635, -0.19695563,  0.73908959, -0.59690671,  0.84740173, -1.28434032},
 {-1.09974609, -1.12807773,  0.87011991,  0.28358505, -0.80605104, -1.09057368},
 {-0.01863603, -0.02266791,  0.76063088, -2.17079765, -0.79830494, -0.269852},
 { 0.55008398, -0.93140164,  0.68763295, -0.91311678,  0.70873718, -0.49759284},
 { 1.01123753,  0.80224513, -0.12435184, -1.15204245,  0.36431545,  0.18598464},
 {-0.07978275,  0.10834172, -0.87340988,  0.6249324,  -0.31084346,  0.80355342},
 {-0.48076441, -1.06656558,  0.43328379, -0.20321233, -0.6061178,  -0.13753298},
 { 0.026558,   -0.06627288, -0.35379376,  1.94781127,  0.27892058, -0.19347873}
};

double B_1_TO_2[6] = { 
 0.35576115, -0.10233362, -0.0210225,  -1.10756453,  0.76354848,  0.31241753 };

double W_2_TO_O[6] = {
 1.51450933, 1.76468722, -1.5181064, 0.83442653, 1.56383781, 1.16377575 };

double B_2_TO_O = 0.20036109;

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

#ifndef ZEEPLEARNING_FC
#define ZEEPLEARNING_FC


typedef struct Fully_Connect
{
	int input_size; //input size
	int output_size; //output size
	char *activation;
	double **Weights;	// shape = (output, input)
	double *Bias;	// shape = (output)
	struct Fully_Connect *next_layer;
	} FC;


int init_FC(FC *fc, int input_size, int output_size, char *activation);
int summary_FC(FC *fc);
#endif // ZEEPLEARNING
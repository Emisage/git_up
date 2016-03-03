#include <mex.h>
#include "E:\quick disk\eigen\Eigen"

using namespace std;


//int main()
void mexFunction(int nlhs,mxArray *plhs[],
	int nrhs,const mxArray *prhs[])
{
	//      points
	double *input1, *input2; 
	input1 = mxGetPr(prhs[0]); int N = mxGetM(prhs[0]);
	input2 = mxGetPr(prhs[1]);
	double a = input1[0] * input2[0];
	//cout << S;
	plhs[0] = mxCreateDoubleMatrix(1,1,mxREAL);
	double *result = mxGetPr(plhs[0]);
	result[0] = a;
}


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	int a = 1000;
	float b = 0.0001;
	float c = a - b;
	
	float d = pow(c, 2);
	int t = pow(a, 2);
	float V = 2 * a * b;
	float X = t - V;
	float B = d - X;
	float H = pow(b, 2);
	float Result = B / H;

	printf("Result of program: %f", Result);
	return 0;
}
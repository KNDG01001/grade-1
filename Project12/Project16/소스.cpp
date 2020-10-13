#include <stdio.h>

int vector_add(double x[], double y[], double result[]);
int main()
{
	double x[3] = { 1,2,3 };
	double y[3] = { 1,2,3 };
	double result[3];
	vector_add(x, y, result);
	printf("∫§≈Õ¿« «’ = [ %lf %lf %lf ]", result[0], result[1], result[2]);

	return 0;
}

int vector_add(double x[], double y[], double result[])
{
	for (int i = 0; i < 3; i++)
	{
		result[i] = x[i] + y[i];
	}

}
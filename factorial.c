#include<stdio.h>
double factorial_rec(int n)
{
	if (n <= 1)return(1);
	else return(n * factorial_rec(n - 1));

}
double factorial_iter(int n)
{

	double k, v = 1;
	for (k = n; k > 0; k--)
		v = v * k;
	return(v);
}
double main() {

	int n = 20;

	double result_iter = factorial_iter(n);
	double result_rac = factorial_rec(n);

	printf("iterative factorial result : %f\n", result_iter);
	printf("recursive factorial result : %f\n", result_rac);

	return 0;
}

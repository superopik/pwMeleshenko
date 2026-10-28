#include <stdio.h>
#include <math.h>

void opredelenie_varianta()
{
	int k = 16;
	int student = 111260209;
	int nomer_varianta = ((student + (k + 22)) % 30) + 1;
	printf("%d\n", nomer_varianta);
}
double calc(double a, double b)
{
	double res = (a - b) / sqrt((a * a) - (b * b));
	return res;
}
int main(void)
{
	opredelenie_varianta();
	double a,b;
	while (scanf("%lf %lf", &a, &b) == 2 && (a*a>b*b))
	{
		printf("%.4f\n",calc(a, b));
	}
	return 0;
}
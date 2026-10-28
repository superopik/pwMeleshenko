#include <stdio.h>
#include <math.h>
void opredelenie_varianta()
{
	int k = 16;
	int student = 111260209;
	int nomer_varianta = ((student + (k + 12)) % 30) + 1;
	printf("%d\n", nomer_varianta);
}
int main(void) // Переменную нужно инициализировать double 0.0 т.к при 0 знаки после точки будут обрезаться и ответ будет неверным
{
	opredelenie_varianta();
	int n;
	while (scanf("%6d", &n) > 0 && n > 0)
	{
		double S = 0.0;
		for (int i = 1;i <= n;i++)
		{
			S += 1 / sqrt(i);
		}
		printf("%.6f\n", S);
	}
}
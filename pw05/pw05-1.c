#include <stdio.h>
void opredelenie_varianta()
{
	int k = 16;
	int student = 111260209;
	int nomer_varianta = (student % 30) + 1;
	printf("%d\n", nomer_varianta);
}
int main(void) // Ошибка округления может накапливаться из-за ограничений точности представления чисел
{
	opredelenie_varianta();
	int count = 1;
	for (double x = -2.0;x <= 2.0;x += 0.5)
	{
		double y = x * x * x - x;
		printf("%d %8.4f %8.4f\n", count++, x, y);
	}
}
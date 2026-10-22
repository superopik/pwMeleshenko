#include <stdio.h>

double bit_to_byte(double b)
{
	const koeff = 8;
	double byte = b / koeff;
	return byte;
}

int main(void) //13 вариант
{
	double bit=0;
	while (scanf("%lf", &bit)==1)
	{
		printf("%.2lf\n", bit_to_byte(bit));
	}
	return 0;
}
// Если ввести в scanf неверный аргумент или EOF, то цикл прерывается и программа завершается.
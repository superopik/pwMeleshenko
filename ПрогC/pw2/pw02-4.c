#include <stdio.h>
#include <limits.h>
int main()
{
	printf("%d\n%d\n%u\n", INT_MIN, INT_MAX, UINT_MAX);
	printf("%d\n", (unsigned int)INT_MAX * 2u + 1u == UINT_MAX); // Приведение к без знаковому типу необходимо т.к при умножении на 2 данные выходят за пределы типа int
	return 0;
}
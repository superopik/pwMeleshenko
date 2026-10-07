#include <stdio.h>
#include <limits.h>
int main()
{
	printf("%d\n%d\n%u\n", INT_MIN, INT_MAX, UINT_MAX);
	printf("%d", (unsigned int)INT_MAX * 2u + 1u == UINT_MAX); // Без приведения к беззнаковому значению, значение выходит за пределы int
	return 0;
}
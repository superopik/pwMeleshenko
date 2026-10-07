#include <stdio.h>
#include <stdint.h>
int main()
{
	uint8_t a;
	scanf("%hhu", &a);
	uint8_t sum, mul2, sqr;
	sum = a + a;
	mul2 = a * 2;
	sqr = a * a;
	printf("SUM:%hhu\n", sum);
	printf("MUL2:%hhu\n", mul2);
	printf("SQR:%hhu\n", sqr);
	return 0;
}
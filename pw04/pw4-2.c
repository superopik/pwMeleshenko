//#include <stdio.h>
//#include <stdint.h>
//int main(void) //27 вариант
//{
//	uint16_t d1, d2;
//	scanf("%5hu%5hu", &d1, &d2);
//	printf("d1: %hu\nd2: %hu\n", d1, d2);
//	float result = (float)d1 * d2 / 2;
//	printf("result:%f\n", result);
//	printf("uint16_t: %llu\n",(unsigned long long) sizeof(uint16_t));
//	printf("float: %llu\n", (unsigned long long) sizeof(float));
//	printf("unsigned long long: %llu\n", (unsigned long long) sizeof(unsigned long long));
//	return 0;
//}
//// Без явного привидения результат при перемножении мог выйти за пределы int, а также при делении дробная часть бы отбрасывалась
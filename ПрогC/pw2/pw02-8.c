#include <stdio.h>
#include <float.h>
int main()
{
	printf("FLOAT: size = %d,digits=%d,max=%f\n",(int)sizeof(float),FLT_DIG,FLT_MAX);
	printf("DOUBLE: size = %d,digits=%d,max=%e\n", (int)sizeof(double), DBL_DIG, DBL_MAX);
	printf("LDOUBLE: size = %d,digits=%d,max=%Le\n", (int)sizeof(long double), LDBL_DIG, LDBL_MAX);
	// Количество цифр показателя степени в выводе может отличаться взависимости от системы,double и long double могут совпадать
	return 0;
}
#include <stdio.h>
#include <stdint.h>
int main()
{
	printf("INT8: size=%d, min=%d,max=%d,values=%d\n",sizeof(int8_t),INT8_MIN,INT8_MAX,INT8_MAX-INT8_MIN+1);
	printf("UINT8: size=%d, min=%d,max=%d,values=%d\n", sizeof(uint8_t), 0, UINT8_MAX, UINT8_MAX+1);
	printf("INT16: size=%d, min=%d,max=%d,values=%d\n", sizeof(int16_t), INT16_MIN, INT16_MAX, INT16_MAX - INT16_MIN + 1);
	printf("UINT16: size=%d, min=%d,max=%d,values=%d\n", sizeof(uint16_t), 0, INT16_MAX, UINT16_MAX+1);
	printf("INT32: size=%d, min=%d,max=%d,values=%lld\n", sizeof(int32_t), INT32_MIN, INT32_MAX, (long long int)INT32_MAX - INT32_MIN + 1);
	printf("UINT32: size=%d, min=%d,max=%lld,values=%lld\n", sizeof(uint32_t), 0, UINT32_MAX, (long long int)UINT32_MAX +1);
	return 0;
}
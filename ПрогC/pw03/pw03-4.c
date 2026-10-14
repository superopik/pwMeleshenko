#include <stdio.h>
#include <string.h>
int main(void)
{
	printf("\x48\x65\x6C\x6C\x6F\t\x57\x6F\x72\x6C\x64\n");
	printf("STRLEN: %zd\n", strlen("\x48\x65\x6C\x6C\x6F\t\x57\x6F\x72\x6C\x64"));
	printf("SIZEOF: %zd\n", sizeof("\x48\x65\x6C\x6C\x6F\t\x57\x6F\x72\x6C\x64")); 
	//48-H, 65-e,6C-l,6F-o, \t-табул€ци€, 57-W,72-r,64-d
	return 0;
}
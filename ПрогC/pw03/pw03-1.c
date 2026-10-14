#include <stdio.h>
#include <string.h>
int main(void)
{
	char mas[20]="—Ë·√”“»";
	printf("SIZEOF: %zd\nSTRLEN: %zd\nFREE_BYTES: %zd", sizeof(mas), strlen(mas),sizeof(mas)-strlen(mas)-1);
	return 0;
}
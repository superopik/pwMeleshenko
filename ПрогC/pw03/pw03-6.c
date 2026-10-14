#include <stdio.h>
int main(void)
{
	char s[50];
	int width;
	scanf("%s %d", s,&width);
	printf("%*s\n", width, s);
	printf("%-*s\n", width+5, s);
	return 0;
}
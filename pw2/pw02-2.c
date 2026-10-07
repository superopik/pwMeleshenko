#include <stdio.h>
#include <stdbool.h>
int main()
{
	bool a;
	bool b;
	int c, d;
	scanf("%d %d", &c, &d);
	a = c;
	b = d;
	printf("%d\n%d\n%d\n%d\n", a, b,sizeof(bool),a+b);
	return 0;
}
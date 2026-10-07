#include <stdio.h>
int main()
{
	int a = 10;
	int b = 010;
	int c = 0x10;
	printf("%d\n%d\n%d\n", a, b, c);
	printf("%d %d %d %d\n", sizeof(10), sizeof(10u),sizeof(10LL),sizeof(10ULL));
	printf("%d %d %d\n", sizeof(0.1f), sizeof(0.1), sizeof(0.1L));
	printf("%d\n", 0.1f == 0.1);
	char l = 'A';
	printf("%d %d %d\n", l,'\x41','\101');
	printf("%d %d %d\n", sizeof('A'), sizeof(l), sizeof("A"));
	return 0;
}
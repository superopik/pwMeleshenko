#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
	const char s1[] = "—бой матрицы";
	wchar_t s2[] = L"—бой матрицы";
	printf("char -> sizeof: %zd bytes, strlen: %zd chars\n",sizeof(s1),strlen(s1));
	printf("wchar -> sizeof: %zd bytes, wcslen: %zd chars\n",sizeof(s2), wcslen(s2));
	return 0;
}
#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	wchar_t ws[100];
	wscanf(L"%ls", ws);
	wprintf(L"Агент %ls авторизован в системе", ws);
	return 0;
}
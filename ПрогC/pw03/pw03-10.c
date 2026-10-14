#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	wchar_t ws1[100];
	wchar_t ws2[100];
	wchar_t ws3[100];
	wscanf(L"%ls%ls%ls", ws1,ws2,ws3);
	wprintf(L"%-15ls|%20ls|%.5ls", ws1,ws2,ws3);
	return 0;
}
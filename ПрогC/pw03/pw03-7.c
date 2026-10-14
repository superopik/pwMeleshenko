#include <stdio.h>
#include <string.h>
#define DISTRO "LinuxDistro"
int main(void)
{
	const char RDATE[] = "2026";
	printf("DISTRO:%s\nRDATE:%s\nSTRLEN:%zd\nSIZEOF:%zd\n", DISTRO, RDATE, strlen(DISTRO), sizeof(DISTRO));
	return 0;
}
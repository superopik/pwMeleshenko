#include <stdio.h>
#define HEIGHT 5
void opredelenie_varianta()
{
	int k = 16;
	int student = 111260209;
	int nomer_varianta = ((student +(k+6)) % 30) + 1;
	printf("%d\n", nomer_varianta);
}
int main(void)
{
	opredelenie_varianta();
	for (int i = 1;i <= HEIGHT;i++)
	{
		for (int j = 0;j < i;j++)
		{
			printf("%d ", 1);
		}
		printf("\n");
	}
}

// 1
// 1 1 
// 1 1 1 
// 1 1 1 1
// 1 1 1 1 1
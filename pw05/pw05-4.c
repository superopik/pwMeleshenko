#include <stdio.h>
void opredelenie_varianta()
{
	int k = 16;
	int student = 111260209;
	int nomer_varianta = ((student + (k + 18)) % 30) + 1;
	printf("%d\n", nomer_varianta);
}

int main(void) 
{
    double arr[8];
    arr[0] = 1.0;                        
    for (int i = 1; i < 8; i++) // Заполнение массива числами Белла
    {
        double sum = 0.0;
        double kolichestvo_sochet = 1.0;
        for (int k = 0; k < i; k++) 
        {
            sum += kolichestvo_sochet * arr[k];             // C(i-1, k)
            kolichestvo_sochet = kolichestvo_sochet * (i - 1 - k) / (k + 1); // переход к C(i-1, k+1)
        }
        arr[i] = sum;
    }
    //arr[0]=1 arr[1]=0+1 arr[2]=0+1+1 arr[3]=0+(1*1)+(2*1)+(1*2) arr[4]=0+(1*1)+(3*1)+(3*2)+(1*5)...

    for (int i = 0; i < 8; i++) 
    {
        printf("%.2f ", arr[i]);
    }
    printf("\n");
    double summa = 0.0;
    for (int i = 0; i < 8; i++)
    {
        summa += arr[i];
    }
    printf("%.2f\n", summa);

    return 0;
}
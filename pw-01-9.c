#include <stdio.h>
int phase_2()
{
    printf("BETA ");
    return 0;
}
int phase_1()
{
    printf("ALPHA ");
    phase_2();
    printf("GAMMA ");
}
int main(void)
{
    printf("START ");
    phase_1();
    printf("END");
    return 0;
}
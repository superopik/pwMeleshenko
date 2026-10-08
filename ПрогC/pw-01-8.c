#include <stdio.h>
char pulse()
{
    return '@';
}
int main(void)
{
    printf("%c\n%c%c\n%c%c%c\n",pulse(),pulse(),pulse(),pulse(),pulse(),pulse());
    return 0;

}
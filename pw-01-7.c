#include <stdio.h>
char* load_mem()
{
    return "MEM_OK";
}
char* load_cpu()
{
    return "CPU_OK";
}
int main(void)
{
    printf("BOOT:%s|%s:END\n",load_mem(),load_cpu());
    return 0;

}
#include <stdio.h>
#include <time.h>

int main()
{
    clock_t st=clock();
    double cpu_time_used;
    int i,j,sum=0;
    for(j=1;j<=10000;j++)
    {
        for(i=1;i<=10000;i++)
        {
            sum++;
        }
    }
    clock_t en=clock();
    cpu_time_used = ((double)(en- st)) / CLOCKS_PER_SEC;
    printf("CPU_TIME_USED : %lf",cpu_time_used);
    return 0;
}



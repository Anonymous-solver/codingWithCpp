#include <stdio.h>
#include <stdlib.h>
int main()
{
    freopen("Output.text","w",stdout);
    long long i;
    for(i=0;i<=1000000;i++)
    {
        printf("%ld ",rand());
    }
    printf("Hello\n");
    return 0;
}

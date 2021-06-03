#include <stdio.h>
#include <stdlib.h>
int main()
{
    //freopen("Abc.txt","w",stdout);
    freopen("Output.text","r",stdin);
    long int i=0;
    long long arr[100001];
    for(i=0;i<=100;i++)
    {
        int tm;
        scanf("%lld ",&arr[i]);
//        printf("%d ",rand());
    }
    long int src=101;
    for(i=0;i<=100;i++)
    {
        if(arr[i]==src)
        {
            printf("Found");
            return 0;
        }
    }
    printf("Not Found");

    return 0;
}


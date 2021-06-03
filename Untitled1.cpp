#include <bits/stdc++.h>
using namespace std;

int main()
{
    int b,p,m,ans;
    while(scanf("%d %d %d",&b,&p,&m)!=EOF)
    {
    ans=1;
    b=b%m;
    while(p)
    {
        if(p&1)
        {
        ans=(ans*b)%m;
        }
        b=(b*b)%m;
        p=p>>1;
    }
    printf("%d\n",ans);
    }
    return 0;
}


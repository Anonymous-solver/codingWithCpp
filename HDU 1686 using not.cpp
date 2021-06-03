#include <bits/stdc++.h>
using namespace std;

char a[1111111],b[11111];
int next[1111111];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        scanf("%s",b);
        scanf("%s",a);
        int la=strlen(a);
        int lb=strlen(b);
        int sum=0;
        for(int i=0,j=-1;i<=lb;i++,j++)
        {
            next[i]=j;

            while(~j&&b[i]!=b[j])
                j=next[j];
        }
        for(int i=0,j=0;i<=la;i++,j++)
        {
            if(j==lb)
            {
                sum++;
                j=next[j];
            }
            while(~j&&a[i]!=b[j])
                j=next[j];
        }
        printf("%d\n",sum);
    }
    return 0;
}

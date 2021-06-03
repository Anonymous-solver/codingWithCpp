#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,j,s;
    cout<<"PERFECTION OUTPUT"<<endl;
    while(scanf("%d",&n)!=EOF)
    {
        s=0;
        if(n!=0)
        {
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                j=n/i;
                s+=j+i;
            }
        }
        s=s+1;

        printf("%5d  ", n);
        if(n==1) cout<<"DEFICIENT"<<endl;
        else if(s==n) cout<<"PERFECT"<<endl;
        else if(s<n) cout<<"DEFICIENT"<<endl;
        else if(s>n) cout<<"ABUNDANT"<<endl;
        }
        else
        {
            cout<<"END OF OUTPUT"<<endl;
        break;
        }
    }
    return 0;
}

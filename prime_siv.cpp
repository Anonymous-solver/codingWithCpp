#include <bits/stdc++.h>
using namespace std;
int status[3200000];
int prime[1000000];
void siv()
{
    for(int i=3;i<=180;i+=2)
    {
        if(!status[i])
        {
            for(int j=i*i;j<=32000;j+=i)
                status[j]=1;
        }
    }
    prime[0] = 2;
    int j=1;
    for(int i=3;i<=32000;i+=2)
    {
        if(!status[i]){
            prime[j++]=i;
        }
    }
}
int main()
{
    siv();
    int a,b,n,temp,total=1,res=0;
    cin>>a>>b>>n;
    int cnt=0,i,j,k;
    for(i=a;i<=b;i++)
    {
        temp=i;
        total=1;
        k=0;
        for(j=prime[k];j*j<=temp;j=prime[++k])
        {
            cnt=0;
            while(temp%j==0)
            {
                cnt++;
                temp/=j;
            }
            total*=cnt+1;
        }
        if(temp!=1)
            total*=2;
        if(total==n)
            res++;
    }
    cout<<res<<endl;
}

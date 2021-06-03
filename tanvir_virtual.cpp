#include <bits/stdc++.h>
using namespace std;

#define mx 1000000
#define ll long long
ll divisor[mx];

void fn()
{

    for(ll i=1;i<=mx;i++)
    {
        divisor[i]=1;
    }

    for(ll i=2;i<=mx;i++)
    {
        divisor[i]+=1;

        for(ll j=i+i;j<=mx;j=j+i) divisor[j]+=1;
    }
}

int main()
{
    fn();
    ll t,a,b,i,j,k,cnt;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cnt=0;
        cin>>k>>a>>b;
        for(j=a;j<=b;j++)
        {
            if(divisor[j]==k) cnt++;
        }
        cout<<cnt<<endl;
    }
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll b,p,m;
    while(cin>>b>>p>>m)
    {
        ll ans=1;
        b%=m;
        while(p)
        {
            if(p%2)
            {
                ans=(ans*b)%m;
            }
            b=(b*b)%m;
            p=p/2;
        }
        cout<<ans<<endl;
    }
}


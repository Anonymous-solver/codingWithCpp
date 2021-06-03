#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll T, n,e,o,st;
    cin>>T;
    while(T--)
    {
        cin>>n;
        map<ll,ll>mp;
        for(ll i=0;i<n;i++)
        {
            cin>>e>>o;
            for(ll j=e;j<=o;j++)
            {
                mp[j]++;
            }
            st=0;
            for(ll k=0;k<mp.size();k++)
            {
                if(st<mp[k])
                {
                    st=mp[k];
                }
            }
        }
        cout<<st<<endl;
    }
}


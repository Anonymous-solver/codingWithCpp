#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll t,n,x,d,st;
    cin>>t;
    for(ll i=1;i<=t;i++)
    {
        cin>>n>>x;
        st=x;
        x=(x/2)*(x/2);
        ll arr[n+1],ans,fi=INT_MAX,val=2;
        for(ll j=1;j<=n;j++)
        {
            cin>>arr[j];
            ans=arr[j];
            ans=ans*ans;
            d=ceil(st*1.0/arr[j]*1.0);
            if(ans-x>=0)
            {
                cout<<"anik"<<endl;
                fi=min(fi,val);
            }
            fi=min(fi,d);
        }
        cout<<fi<<endl;
    }
}

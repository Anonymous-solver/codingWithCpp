#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI acos(-1)
#define N 1000000007

ll maX[1000000];
int main()
{
    ll n,sum=0;
    map<ll,ll> mp;
    cin>>n;
    ll ar[n];
    for(ll i=0;i<n;i++)
    {
        cin>>ar[i];
        sum+=ar[i];
        if(mp[ar[i]]==0)
            mp[ar[i]]=1;
        else if(mp[ar[i]]==1)
            mp[ar[i]]=2;
    }
    vector<ll>ans;
    for(ll i=0;i<n;i++)
    {
        ll a=(sum-ar[i])/2;
        ll b=(sum-ar[i]);
        if(mp[a]==1&&b%2==0&&a!=ar[i])
        {
            ans.push_back(i);
        }
        else if(mp[a]==2&&b%2==0)
        {
            ans.push_back(i);
        }
    }
    cout<<ans.size()<<endl;
    for(ll i=0;i<ans.size();i++)
        cout<<ans[i]+1<<" ";
    return 0;
}

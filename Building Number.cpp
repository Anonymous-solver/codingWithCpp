#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N=1e5+10;
ll ans[N];
ll solve(ll x)
{
    int num=0;
    while(x!=1)
    {
        if(x%2==0)x/=2;
        else x--;
        num++;
    }
    return num;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        memset(ans,0,sizeof(ans));
        int n,m,l,r;
        scanf("%d%d",&n,&m);
        ll x;
        for(int i=1;i<=n;i++)
        {
            scanf("%lld",&x);
            ans[i]=ans[i-1]+solve(x);
        }
        for(int i=1;i<=m;i++)
        {
            scanf("%d%d",&l,&r);
            printf("%lld\n",ans[r]-ans[l-1]);
        }
    }
    return 0;
}

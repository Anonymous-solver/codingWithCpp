#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
const int N = 3e5+7;
const LL mod = 100000007;
int a[N], num[N], use[1007];
LL dp[N];

int main()
{
    int t, ncase=1;
    scanf("%d", &t);
    while(t--)
    {
        int n, m;
        scanf("%d %d", &n, &m);
        for(int i=1;i<=n;i++) scanf("%d", &a[i]);
        for(int i=1;i<=n;i++) scanf("%d", &num[i]);
        memset(dp,0,sizeof(dp));
        dp[0]=1;
        for(int i=1;i<=n;i++)
        {
            for(int j=m;j>=a[i];j--)
            {
                for(int k=1;k<=num[i];k++)
                {
                    if(j-a[i]*k<0) break;
                    dp[j]=(dp[j]+dp[j-a[i]*k])%mod;
                }
            }
        }
        printf("Case %d: %lld\n",ncase++,dp[m]%mod);
    }
    return 0;
}

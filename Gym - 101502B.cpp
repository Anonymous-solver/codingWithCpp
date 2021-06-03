#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,a,b;
    long long int ans;
    scanf("%d", &t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d", &n);
        map<int,int> mpa;
        vector <int> v;
        ans=0;
        for(int j=1;j<=n;j++)
        {
            scanf("%d %d", &a,&b);
            mpa[a]++;
            v.push_back(b);
        }
        for(int k=0;k<v.size();k++)
        {
            ans=ans+mpa[v[k]];
        }
        printf("%lld\n", ans);
    }
}

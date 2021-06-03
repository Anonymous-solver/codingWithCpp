#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll  m[1001][1001],a[1001],b[502],n;

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)  cin>>m[i][j];
    }
	for(int i=n;i;i--) cin>>a[i];
	for(int k=1;k<=n;k++)
    {
		for(int i=1;i<=n;i++)
		{
		    for(int j=1;j<=n;j++) m[i][j]=min(m[i][j],m[i][a[k]]+m[a[k]][j]);
		}
		for(int i=1;i<=k;i++)
        {
            for(int j=1;j<=k;j++) b[k]+=m[a[i]][a[j]];
        }
	}
	for(int i=n;i;i--) cout<<b[i]<<" ";
}

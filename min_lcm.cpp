#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int maxn=1e7+5;
int vis[maxn];
int ans[2];
int main()
{
	int n;
	ll temp1=1e18;
	memset(vis,0,sizeof(vis));
	cin>>n;
	int x;
	for(int i=1;i<=n;i++)
    {
		cin>>x;
		if(vis[x])
		{
			if(x<temp1)
			{
				temp1=x;
				ans[0]=vis[x];
				ans[1]=i;
			}
		}
		vis[x]=i;
	}
	for(int i=1;i<maxn;i++)
    {
		int sum=0;
		ll temp=0;
		for(int j=i;j<maxn;j+=i)
		{
			if(vis[j])
				sum++;
			if(sum && !temp)
				temp=j;
			if(sum>=2)
            {
				ll tempx=(temp/i)*j;
				if(tempx<temp1)
				{
					temp1=tempx;
					ans[0]=vis[temp];
					ans[1]=vis[j];
				}
				break;
			}
		}
	}
	if(ans[0]>ans[1])
		swap(ans[0],ans[1]);
	cout<<ans[0]<<" "<<ans[1]<<endl;
}

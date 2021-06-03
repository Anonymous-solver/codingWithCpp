#include<bits/stdc++.h>
using namespace std;

int n,h,ans;
int sz[1005];
bool cmp(int a,int b)
{
	return a>b;
}
int main()
{
	scanf("%d%d",&n,&h);
	for(int i=1;i<=n;i++)
	{
		cin>>sz[i];
	}
	for(int i=1;i<=n;i++)
	{
		int ls=h;
		sort(sz+1,sz+i+1,cmp);
		cout<<sz[2]<<endl;
		return 0;
		for(int j=1;j<=i;j++)
		{
			if(ls<sz[j])
			{
				cout<<ans;
				return 0;
			}
			if(j%2==0)
			{
				ls-=sz[j-1];
			}
		}
		ans=i;
	}
	printf("%d\n",ans);
	return 0;
}

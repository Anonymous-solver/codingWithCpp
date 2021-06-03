#include <bits/stdc++.h>
using namespace std;
#define S 1000005
#define ll long long
vector <ll> adj[S];
map <pair <ll,ll> ,ll > mp;
ll dis[S],k,p[S];
priority_queue <ll> q;

void f(ll i)
{
	if (i != 1) f(p[i]);
	cout <<i <<' ';
}
int main()
{
    int n,m,a,b,c,z,w,i;
    cin>>n>>m;
    for( i=0;i<m;i++)
    {
        cin>>a>>b>>c;
        adj[a].push_back(b);
        adj[b].push_back(a);

        mp[{a,b}]=c;
	    mp[{b,a}]=c;
    }
    for (i=2; i<=n; i++) dis[i]=1e18;
    q.push(1);

	while (q.size())
	{
		k=q.top();
		q.pop();
        for (int i = 0; i < adj[k].size(); i++)
		{
			z=adj[k][i];
            w=mp[{k,z}];
			if (dis[k]+w<dis[z]) dis[z]=dis[k]+w,p[z]=k,q.push(z);
		}
	}
	if (dis[n] == 1e18) return cout<<-1,0;
	else f(n);
}


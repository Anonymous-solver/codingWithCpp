#include <bits/stdc++.h>
using namespace std;

#define S 100001
#define ll long long
vector <ll> adj[S];
vector <ll> Cost[S];
ll dis[S];
priority_queue <ll> q;

int main()
{
    int n,m,a,b,c,z,w,i,T,u,v,j,k;
    cin>>T;
    while(T--)
    {

        for ( i = 0; i < S; i++) {adj[i].clear(); Cost[i].clear();}
        cin>>n>>m;
        for( i=0;i<m;i++)
        {

            cin>>a>>b>>c;
            adj[a].push_back(b);
            Cost[a].push_back(c);
        }
        for (i=0; i<=n; i++) dis[i]=1e9;
        cin>>u>>v;
        dis[u]=0;
        q.push(u);
	    while(q.size())
	    {
		    k=q.top();
		    q.pop();
            for (int i = 0; i < adj[k].size(); i++)
		    {
                z=adj[k][i];
                w=Cost[k][i];
			    if (dis[k]+w<dis[z]) dis[z]=dis[k]+w,q.push(z);
		    }
	    }
	    if (dis[v] == 1e9) cout<<"NO"<<endl;
	    else cout<<dis[v]<<endl;
    }
}


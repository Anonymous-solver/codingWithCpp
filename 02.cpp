#include <bits/stdc++.h>
using namespace std;

#define S 5009
#define ll long long
vector <ll> adj[S],Cost[S];

ll dis[S],dis1[S];

int main()
{
    ll n,m,a,b,c,z,w,i,T,u,v,j,k,temp,ba,t;
    cin>>T;
    for(t=1;t<=T;t++)
    {
        for (i = 0; i < S; i++) {adj[i].clear(); Cost[i].clear();}
        cin>>n>>m;
        for( i=0;i<m;i++)
        {
            cin>>a>>b>>c;
            adj[a].push_back(b);
            adj[b].push_back(a);

            Cost[a].push_back(c);
            Cost[b].push_back(c);
        }
        ba=100000009; // Its for a special case, given bellow
        for(i=0; i<=adj[1].size()-1;i++)
        {
            ba=min(ba , 2*Cost[1][i]);
        }
        for (i=0; i<=n; i++) dis[i]=1e9,dis1[i]=1e9;
        dis[1]=0;
        priority_queue <ll> q;
        q.push(1);
	    while(q.size())
	    {
		    k=q.top();
		    q.pop();
            for (int i = 0; i < adj[k].size(); i++)
		    {
                z=adj[k][i];
                w=Cost[k][i];
			    if(dis[k]+w<dis[z])
                {
                    dis1[z]=dis[z];
                    dis[z]=dis[k]+w,q.push(z);
                }
		    }

	    }
        cout<<"Case "<<t<<": "<<dis1[]<<endl;
    }
}

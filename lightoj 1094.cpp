#include <bits/stdc++.h>
using namespace std;
#define s 30000
vector <int> adj[s];
vector <int> Cost[s];
int visited[s],dis[s],n;

void bfs(int pass)
{
    memset(visited,0,sizeof(visited));
    queue <int> Q;
    Q.push(pass);
    visited[pass] = 1;
    dis[pass] = 0;

    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();

        for(int i=0;i<adj[u].size();i++)
        {
            int v=adj[u][i];
            if(visited[v]==0)
            {
                visited[v]=1;
                dis[v] = dis[u] + Cost[u][i];
                Q.push(v);
            }
        }
    }
}
int main()
{
    int t,test=1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n-1;i++)
        {
            int u,v,cost;
            cin>>u>>v>>cost;
            adj[u].push_back(v);
            adj[v].push_back(u);

            Cost[u].push_back(cost);
            Cost[v].push_back(cost);
        }
        bfs(0);
        int m=0,again;
        for(int i=0;i<n;i++)
        {
            if(dis[i]>m)
            {
                again=i;
                m=dis[i];
            }
        }
        bfs(again);
        m=0;
        for(int i=0;i<n;i++)
        {
            if(dis[i]>m)
            {
                m=dis[i];
            }
        }
        cout<<"Case "<<test<<": "<<m<<endl;
        test++;
        memset(adj,0,sizeof(adj));
        memset(Cost,0,sizeof(Cost));
    }
}

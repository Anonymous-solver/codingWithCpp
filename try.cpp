#include <bits/stdc++.h>
using namespace std;
int level[10];
bool visit[10];
vector <int> graph[10];
void bfs(int u)
{
    visit[u]=1;
    level[u]=0;
    queue <int> q;
    q.push(u);
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        int len=graph[u].size();
        for(int i=0;i<len;i++)
        {
            int v=graph[u][i];
            if(!visit[v])
            {
                visit[v]=1;
                level[v]=level[u]+1;
                q.push(v);
            }

        }
    }
}
int main()
{

    int node,edge;
    cin>>node>>edge;
    for(int i=1;i<=edge;i++)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    bfs(1);
    for(int i=0;i<10;i++)
    {
        cout<<i<<" "<<level[i]<<endl;
    }

    return 0;
}

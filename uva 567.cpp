#include<bits/stdc++.h>
using namespace std;

bool visited[25];
int level[25];
vector <int> graph[25];

void bfs(int b,int e)
{
    visited[b]=1;
    level[b]=0;
    queue <int>q;
    memset(visited,0,sizeof(visited));
    q.push(b);
    while(!q.empty())
    {
        int u=q.front();
        for(int i=0;i<graph[u].size();i++)
        {
            int v = graph[u][i];
            if(!visited[v])
            {
                visited[v]=1;
                level[v] = level[u]+1;
                q.push(v);
            }
        }
        q.pop();
    }
   printf("%2d to %2d: %d\n",b,e,level[e]);
}

int main()
{
    int x,y,test=1,b,e,n;
    while(scanf("%d",&x)!=EOF)
    {
        for(int j=0;j<x;j++)
        {
            cin>>y;
            graph[1].push_back(y);
            graph[y].push_back(1);
        }
        for(int i=2;i<=19;i++)
        {
            cin>>x;
            for(int j=0;j<x;j++)
            {
                cin>>y;
                graph[i].push_back(y);
                graph[y].push_back(i);
            }
        }
        cin>>n;
        printf("Test Set #%d\n",test++);
        for(int i=0;i<n;i++)
        {
            cin>>b>>e;
            bfs(b,e);
        }
       cout<<endl;
       memset(graph,0,sizeof graph);
    }
    return 0;
}

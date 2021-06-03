#include <bits/stdc++.h>
#define size 25
#define bound(i,j) ((i>=0 && j>=0) && (i<row && j<column))
#define Pair pair <int,int>

using namespace std;
int row,column;
int X[]={0,0,1,-1};
int Y[]={1,-1,0,0};
int dis[size][size];
char ch,grid[size][size];
bool visited[size][size];
void bfs(int i,int j)
{
    for(int x=0; x < row; x++)
    {
        for(int y = 0; y < column; y++)
        {
            dis[x][y]=500;
            visited[x][y]=false;
        }
    }
    visited[i][j]=true;
    dis[i][j]=0;

    queue<Pair> q;
    q.push(make_pair(i,j));
    while(!q.empty())
    {
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        for(int k=0;k<4;k++)
        {
            i=x+X[k];
            j=y+Y[k];
            if(bound(i,j) && grid[i][j]!='m' && grid[i][j]!='#' && !visited[i][j] )
            {
                visited[i][j]=true;
                dis[i][j]=min(dis[x][y]+1,dis[i][j]);
                q.push(make_pair(i,j));
            }
        }
    }

}
int main()
{
    int t,ma,mb,mc,hx,hy;
    cin>>t;
    for(int z=1;z<=t;z++)
    {
        cin>>row>>column;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                cin>>ch;
                grid[i][j]=ch;
                if(grid[i][j]=='h')
                {
                    hx=i;
                    hy=j;
                }
            }
        }
        for(int i=0;i<row;i++)
         {
            for(int j=0;j<column;j++)
            {
                if(grid[i][j]=='a')
                {
                    bfs(i,j);
                    ma=dis[hx][hy];
                }
                else if(grid[i][j]=='b')
                {
                    bfs(i,j);
                    mb=dis[hx][hy];
                }
                else if(grid[i][j]=='c')
                {
                    bfs(i,j);
                    mc=dis[hx][hy];
                }
            }
        }
        cout<<"Case "<<z<<": "<<max(max(ma,mb),mc)<<endl;

    }
    return 0;
}

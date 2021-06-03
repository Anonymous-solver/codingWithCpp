#include <bits/stdc++.h>
using namespace std;
#define max 32
char grid[max][max][max];
int visited[max][max][max],cost[max][max][max],L,R,C;

int X[6] = {1,-1,0,0,0,0};
int Y[6] = {0,0,1,-1,0,0};
int Z[6] = {0,0,0,0,1,-1};

void bfs(int x,int y,int z)
{
    int vx,vy,vz,ux,uy,uz,k;

    queue<int>Q;

    Q.push(x);
    Q.push(y);
    Q.push(z);

    visited[x][y][z] = 1;
    cost[x][y][z] = 0;

    while(!Q.empty())
    {
        ux = Q.front();
        Q.pop();

        uy = Q.front();
        Q.pop();

        uz = Q.front();
        Q.pop();

        for(k=0;k<6;k++)
        {
            vx = ux+X[k];
            vy = uy+Y[k];
            vz = uz+Z[k];

            if((vx>=0 && vx<L) && (vy>=0 && vy<R) && (vz>=0 && vz<C) && (grid[vx][vy][vz] != '#'))
            {

                if(visited[vx][vy][vz]==0)
                {
                    visited[vx][vy][vz] = 1;
                    cost[vx][vy][vz] = cost[ux][uy][uz]+1;
                    Q.push(vx);
                    Q.push(vy);
                    Q.push(vz);
                }
            }
        }
    }
}
int main()
{
    int x,y,z,x1,y1,z1;

    while(scanf("%d%d%d",&L,&R,&C)==3)
    {
        memset(grid,0,sizeof(grid));
        memset(visited,0,sizeof(visited));
        memset(cost,0,sizeof(cost));

        if(L==0 && R==0 &&C==0) return 0;

        for(int i=0;i<L;i++)
        {
            for(int j=0;j<R;j++)
            {
                for(int k=0;k<C;k++)
                {
                    scanf(" %c",&grid[i][j][k]);
                }
            }
        }
        for(int i=0;i<L;i++)
        {
            for(int j=0;j<R;j++)
            {
                for(int k=0;k<C;k++)
                {
                    if(grid[i][j][k]=='S')
                    {
                        x=i;
                        y=j;
                        z=k;
                    }
                    if(grid[i][j][k]=='E')
                    {
                        x1=i;
                        y1=j;
                        z1=k;
                    }
                }
            }
        }
        bfs(x,y,z);

        if(cost[x1][y1][z1]==0)
            printf("Trapped!\n");

        else
            printf("Escaped in %d minute(s).\n",cost[x1][y1][z1]);
    }
    return 0;
}

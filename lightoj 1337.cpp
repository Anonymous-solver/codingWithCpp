#include <bits/stdc++.h>
#define SIZE 505
#define BOUND(i, j) ((i >= 0 && i < row) && (j >= 0 && j  < column))
using namespace std;
char ch;
char grid[SIZE][SIZE];
bool visited[SIZE][SIZE];
int row, column, co,x,y;
int cost[SIZE][SIZE];

int X[] = {1 , -1, 0, 0};
int Y[] = {0 , 0, 1, -1};
void dfs(int x, int y)
{
	for(int i = 0; i < 4; i++)
	{

		if(BOUND(x+X[i], y+Y[i]) && ((grid[x+X[i]][y+Y[i]] == '.') || (grid[x+X[i]][y+Y[i]] == 'C')) && !visited[x+X[i]][y+Y[i]])
		{
		    if(grid[x+X[i]][y+Y[i]] == 'C')
            {
                co++;
            }
			visited[x+X[i]][y+Y[i]] = true;

			dfs(x+X[i], y+Y[i]);
		}
	}
}

int main()
{
    int t,q,m,n;
    scanf("%d",&t);
    for(int z=1;z<=t;z++)
    {
        scanf("%d %d %d",&row, &column,&q);
        memset(cost,-1,sizeof(cost));


        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                scanf(" %c",&ch);
                grid[i][j]=ch;
            }
        }
        printf("Case %d:\n",z);
        for(int k=1;k<=q;k++)
        {
            memset(visited, 0, sizeof visited);
            scanf("%d %d",&x, &y);
            x--;
            y--;

            co=0;
            if(cost[x][y]==-1)
            {
            dfs(x,y);
            cost[x][y]=co;
            printf("%d\n",co);
            for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                if(visited[i][j]) cost[i][j]=co;
            }
        }
            }
            else
            {
                printf("%d\n",cost[x][y]);
            }
        }
    }
    return 0;
}


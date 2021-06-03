#include <bits/stdc++.h>
using namespace std;
#define s 10000
int row,column;
#define BOUNDARY(m,n) ((m>= 0 && m <2*row ) && (n >= 0 && n <2*column ))

int X[]={0,1,0,-1};
int Y[]={1,0,-1,0};
int T,c,r,cnt;
int vis[s][s];
int grid[s][s];
int dfs(int x,int y)
{
    for(int l=0;l<4;l++)
    {
        if(BOUNDARY(x+X[l],y+Y[l]) && grid[x+X[l]][y+Y[l]]==0 && !vis[x+X[l]][y+Y[l]])
        {
            cout<<"anik"<<endl;
            if(grid[x+X[l]][y+Y[l]]==0) cnt++;
            vis[x+X[l]][y+Y[l]]=1;
            dfs(x+X[l],y+Y[l]);
        }
    }
    return cnt;
}


int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {

        int row,column;
        cin>>row>>column;
        cnt=0;
        int grid[2*row+1][2*column+1];
        memset(vis,0,sizeof(vis));
        memset(grid,0,sizeof(grid));
        /*for(int j=0;j<1;j++)
        {
            for(int k=0;k<2*column;k++)
            {
                grid[j][k]=-1;
            }
        }*/
        for(int j=0;j<2*row;j+=2)
        {
            for(int k=0;k<2*column;k+=2)
            {
                char ch;
                cin>>ch;
                if(ch=='D')
                {
                    grid[j][k]=1;
                    grid[j+1][k]=1;
                    grid[j+1][k+1]=-1;
                }
                else if(ch=='R')
                {
                    grid[j][k]=1;
                    grid[j][k+1]=1;
                    grid[j+1][k]=-1;
                }
                else if(ch=='B')
                {
                    grid[j][k]=1;
                    grid[j][k+1]=1;
                    grid[j+1][k]=1;

                }
                else if(ch=='N')
                {
                    grid[j][k]=1;
                    grid[j+1][k]=-1;
                    grid[j+1][k+1]=-1;
                }
            }
        }
        dfs(0,0);
        cout<<cnt<<endl;
        for(int j=0;j<2*row;j++)
        {
            for(int k=0;k<2*column;k++)
            {
                cout<<grid[j][k]<<".....";
            }
            cout<<endl;
        }

    }

}

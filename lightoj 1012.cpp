#include <bits/stdc++.h>
using namespace std;
#define BOUNDARY(m,n) ((m>= 0 && m <r ) && (n >= 0 && n <c ))
int X[]={0,1,0,-1};
int Y[]={1,0,-1,0};
int T,c,r,cnt,m,n;
int visited[25][25];
char arr[25][25];
void dfs(int x,int y)
{
    for(int l=0;l<4;l++)
    {
        m=x+X[l];
        n=y+Y[l];
        if(BOUNDARY(m,n) && arr[m][n]=='.' && !visited[m][n])
        {
            cnt++;
            visited[x+X[l]][y+Y[l]]=1;
            dfs(x+X[l],y+Y[l]);
        }
    }
}
int main()
{
    int x,y;

    cin>>T;
    for(int t=1;t<=T;t++)
    {
        cin>>c>>r;
        cnt=1;
        memset(visited,0,sizeof(visited));
        for(int j=0;j<r;j++)
        {
            for(int k=0;k<c;k++)
            {
                cin>>arr[j][k];
                if(arr[j][k]=='@')
                {
                    x=j,y=k;
                    visited[x][y]=1;
                }
            }
        }
        dfs(x,y);
        cout<<"Case "<<t<<": "<<cnt<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;

#define INF 100000000
#define maxn 505
long cost[maxn][maxn];
long dis[maxn];
bool used[maxn];
int T,n;
long prim()
{
    for(int i=0;i<n;i++)
    {
        dis[i]=cost[0][i];
        used[i]=false;
    }
    used[0]=true;
    long ans=-1;
    for(int i=0;i<n-1;i++)
    {
        long temp=INF;
        int temp_pos=0;
        for(int j=0;j<n;j++)
            if(!used[j]&&dis[j]<temp)
            {
                temp=dis[j];
                temp_pos=j;
            }
        ans=ans>temp?ans:temp;
        used[temp_pos]=true;
        for(int j=0;j<n;j++)
        {
            if(!used[j]&&dis[j]>cost[temp_pos][j])
                dis[j]=cost[temp_pos][j];
        }
    }
    return ans;
}
int main()
{
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                scanf("%ld",&cost[i][j]);
        printf("%ld\n",prim());
    }
    return 0;
}

#include <bits/stdc++.h>
#define S 20003
using namespace std;
vector <int> Node[S];
int n, visited[S], color[S], have[S];
int cnB, cnW;

void dfs(int pass)
{
    if(visited[pass]) return;
    visited[pass] = 1;
    int s=Node[pass].size();
    for(int i=0;i<s;i++)
    {
        int v=Node[pass][i];

        if(color[pass]==-1) color[pass]=1, cnB++;
        if(color[pass]==1 && color[v]==-1) color[v]=0, cnW++;
        if(color[pass]==0 && color[v]==-1) color[v]=1, cnB++;
        dfs(v);
    }
}

int main(){
    int t, x, y, test=1, mx, ans;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        ans = 0;
        memset(color, -1, sizeof(color));
        memset(visited, 0, sizeof(visited));
        memset(have, 0, sizeof(have));
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &x);
            scanf("%d", &y);
            have[x] = have[y] = 1;
            Node[x].push_back(y);
            Node[y].push_back(x);
        }
        printf("Case %d: ",test++);
        for(int i=1;i<S;i++)
        {
            if(!visited[i] && have[i])
            {
                cnB = 0, cnW = 0;
                dfs(i);
                mx =max(cnB,cnW);
                ans+=mx;
            }
        }
        printf("%d\n",ans);
        memset(Node,0,sizeof Node);
    }
    return 0;
}

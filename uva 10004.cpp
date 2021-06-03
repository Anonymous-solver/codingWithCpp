#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,e,p;
    while(scanf("%d",&n))
    {
        if(n==0)
        break;
        scanf("%d",&e);
        vector <int> ed[100000];
        int color[10000];
        memset(color,-1,sizeof(color));

        for(int i=0;i<e;i++)
        {
            int x,y;
            scanf("%d%d",&x,&y);
            ed[x].push_back(y);
            ed[y].push_back(x);
        }

        queue <int> work;
        int f=0;
        color[0]=0;
        work.push(0);

        while(!work.empty())
        {
            p=work.front();
            work.pop();
            int vsize=ed[p].size();
            for(int i=0;i<vsize;i++)
            {
                if(color[ed[p][i]]==-1)
                {
                    if(color[p]==0)
                     color[ed[p][i]]=1;
                    else
                    color[ed[p][i]]=0;
                     work.push(ed[p][i]);
                }
                else
                {
                    if(color[ed[p][i]]==color[p]){
                        f=1;
                        break;
                    }
                }
            }
            if(f==1)
                break;
        }
        if(f==1)
        printf("NOT BICOLORABLE.\n");
        else
        printf("BICOLORABLE.\n");
    }

    return 0;
}

#include <bits/stdc++.h>
#define N 1005
#define pp pair <int,int>
using namespace std;
int a[N][N];
int main()
{
	int i, j, k;
	int n,m;
	vector <pp> v;

	scanf("%d%d",&n,&k);

	for(i=1;i<=n;i++)
    {
        m=0;
        for(j=1;j<=n;j++)
        {
            if(i!=j && !a[i][j] && !a[j][i])
            {
                a[i][j]=1;
                a[j][i]=1;
                m++;
                v.push_back({i,j});
            }

            if(m==k)
                break;
        }
        if(m<k)
        {
            printf("-1\n");
            return 0;
        }
    }

    printf("%d\n",v.size());
    for(i=0;i<v.size();i++)
    {
       printf("%d %d\n",v[i].first,v[i].second);
    }

	return 0;
}

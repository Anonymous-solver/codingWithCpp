#include<bits/stdc++.h>
using namespace std;

int p[100001];
int main()
{
    int t, cs, n, i, a, b, q;
    scanf("%d",&t);
    for(cs = 1; cs <= t; cs++)
    {
        scanf("%d %d", &n, &q);
        for(i = 0; i < n; i++) scanf("%d", p+i);
        printf("Case %d:\n", cs);
        while(q--)
        {
            scanf("%d %d", &a, &b);
            a = lower_bound(p, p+ n, a)- p;
            b = upper_bound(p, p + n, b) -p;
            printf("%d\n", b-a);
        }
    }
    return 0;
}

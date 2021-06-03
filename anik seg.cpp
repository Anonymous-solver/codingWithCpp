#include <bits/stdc++.h>
#define mx 100005
using namespace std;

int arr[mx];
int tree[mx*3];

void init(int node, int b, int e)
{
    if(b==e)
    {
        tree[node]=arr[b];
        return;
    }
    int Left=node*2;
    int Right=node*2+1;
    int mid=(b+e)/2;
    init(Left,b,mid);
    init(Right,mid+1,e);
    tree[node]=min(tree[Left],tree[Right]);
}
int query(int node,int b,int e,int r1,int r2)
{
    if(r1>e || r2<b) return mx;
    if(b>=r1 && e<=r2) return tree[node];
    int Left=node*2;
    int Right=node*2+1;
    int mid=(b+e)/2;
    int p1=query(Left,b,mid,r1,r2);
    int p2=query(Right,mid+1,e,r1,r2);
    return min(p1,p2);

}
int main()
{
    int t,s,q,r1,r2;
    scanf("%d",&t);
    for( int i=1;i<=t;i++)
    {
        scanf("%d %d",&s,&q);
        for( int j=1;j<=s;j++)
        {
            scanf("%d",&arr[j]);
        }
        init(1,1,s);
        printf("Case %d:\n",i);
        for( int k=1;k<=q;k++)
        {
            scanf("%d %d",&r1,&r2);
            int ans=query(1,1,s,r1,r2);
            printf("%d\n",ans);
        }
    }
    return 0;
}

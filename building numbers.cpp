#include <bits/stdc++.h>
using namespace std;

const int maxn=1e5+10;
typedef long long ll;
struct node
{
    ll col,row;
    int flag;
};
struct mnode
{
    int flag;
};


int main()
{
    ll t;
    scanf("%lld",&t);
    while(t--)
    {
        map<ll,node> m;
       // map<mnode,mnode>mab;
       map<int,int>mab;
        ll n;
        scanf("%lld",&n);
        ll a,b;
        ll ans=0,flag=0;
        for(ll i=1;i<=n;i++)
            {
                scanf("%lld%lld",&a,&b);
                mab[a]=b;
                    m[a].col+=1;
                    m[b].row+=1;

            }
        map<ll,node>::iterator it;
        for(it=m.begin();it!=m.end();it++){
                ans+=it->second.col*it->second.row;

        }
        printf("%lld\n",ans-flag);
    }
    return 0;
}
---------------------
作者：bryce1010
来源：CSDN
原文：https://blog.csdn.net/Fire_to_cheat_/article/details/78173660
版权声明：本文为博主原创文章，转载请附上博文链接！

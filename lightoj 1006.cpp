#include <bits/stdc++.h>
using namespace std;

long long data[100005];
long long a, b, c, d, e, f;
long long fn( long long n )
{
    if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;
    if(data[n]!=-1) return data[n];
    else
    {
        data[n]=(fn(n-1)+fn(n-2)+fn(n-3)+fn(n-4)+fn(n-5)+fn(n-6))%10000007;
        return data[n];
    }
}
int main()
{
    long long n, caseno = 0, cases;
    scanf("%lld", &cases);
    while(cases--)
    {
        memset(data,-1,sizeof(data));
        scanf("%lld %lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %lld: %lld\n", ++caseno, fn(n) % 10000007);
    }
    return 0;
}

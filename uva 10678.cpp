#include <bits/stdc++.h>
using namespace std;
#define p acos(-1)
int main()
{
    double s,ar,n,d,l,h;
    cin>>n;
    while(n--)
    {
        cin>>d>>l;
        l/=2;
        d/=2;
        h=sqrt(l*l-d*d);
        printf("%.3lf\n",p*h*l);
    }
}

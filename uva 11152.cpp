#include <bits/stdc++.h>
using namespace std;

#define p acos(-1)
int main()
{
    double a,b,c,pe,s,ar,a1,a2,a3;
    while(cin>>a>>b>>c)
    {
        pe=a+b+c;
        s=pe/2;
        ar=sqrt(s*(s-a)*(s-b)*(s-c));
        a1=p*(2*ar/pe)*(2*ar/pe);
        a2=ar-a1;
        a3=p*(a*b*c)/(4*ar)*(a*b*c)/(4*ar)-a1-a2;
        printf("%.4lf %.4lf %.4lf\n",a3,a2,a1);
    }
}


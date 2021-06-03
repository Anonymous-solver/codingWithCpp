#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c,S,p,r,R,S1,S2,S3;

    while(cin>>a>>b>>c)
    {
        p=(a+b+c)*0.5;
        S=sqrt(p*(p-a)*(p-b)*(p-c));
        R=a*b*c/4/S;
        r=sqrt((p-a)*(p-b)*(p-c)/p);

        S1=3.1416*R*R-S;
        S3=3.1416*r*r;
        S2=S-S3;

        printf("%.4f %.4f %.4f\n",S1,S2,S3);
    }
}

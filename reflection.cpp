#include <bits/stdc++.h>
using namespace std;

int main(){
    double x1, y1, x2, y2;
    cin>>x1>>y1>>x2>>y2;
    int q;
    cin>>q;
    while(q--)
    {
        double x, y;
        cin>>x>>y;
        double b1=-(x1-x2);
        double a1=y1-y2;
        double c1=a1*x1-b1*y1;
        double a2=b1;
        double b2=-a1;
        double c2=-(a2*x+b2*y);
        double ipx1=(b1*c2-b2*c1)/(a1*b2-a2*b1);
        double ipy1=(c1*a2-c2*a1)/(a1*b2-a2*b1);
        double ansx, ansy;
        if(ipx1*2-x==-0)
            ansx=0;
        else ansx=ipx1*2-x;
        if(ipy1*2-y==-0)
            ansy=0;
        else ansy=ipy1*2-y;
        printf("%0.10lf %0.10lf\n", ansx, ansy);
    }
    return 0;
}

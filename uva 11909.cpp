#include <bits/stdc++.h>
using namespace std;
#define p acos(-1)
int main()
{
    double l,w,h,d,nh,ans;
    while(cin>>l>>w>>h>>d)
    {
        nh=l*tan(d*p/180.0);
        if(nh > h)
        {
            nh=h*tan((90.0-d)*p/180.0);
            ans=(h*w*nh)/2;
        }
        else
        {
            ans=(l*w*h)-(l*w*nh)/2;
        }
        printf("%.3lf mL\n",ans);
    }
    return 0;
}

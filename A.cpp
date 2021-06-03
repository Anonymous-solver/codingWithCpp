#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q,b,p,f,h,c,cost=0;
    cin>>q;
    while(q--)
    {
        cin>>b>>p>>f>>h>>c;
        b=b/2;
        if(h>c)
        {
            while(b && p)
            {
                cost+=h;
                p--,b--;
            }
            while(b && f)
            {
                cost+=c;
                f--,b--;
            }
        }
        else
        {
            while(b && f)
            {
                cost+=c;
                f--,b--;
            }
            while(b && p)
            {
                cost+=h;
                p--,b--;
            }
        }
         cout<<cost<<endl;
         cost=0;
    }
}

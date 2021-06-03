#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,r=0,c=0,d;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int num=n;
        anik:while(n!=0)
        {
            d=n%10;
            r=r*10+d;
            n=n/10;
        }
        if(r==num)
        {
            cout<<c<<" "<<r<<endl;
            r=0;
            c=0;
        }

        else
        {
            n=r+num;
            num=n;
            r=0;
            c++;
            goto anik;
        }
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x,d,c=0;
    cin>>n>>x;
    char ch;
    while(n--)
    {
        cin>>ch;
        cin>>d;
        if(ch=='+')
        {
            x+=d;
        }
        else if(x>=d)
        {
            x=x-d;
        }
        else c++;
    }
    cout<<x<<" "<<c<<endl;
    return 0;
}

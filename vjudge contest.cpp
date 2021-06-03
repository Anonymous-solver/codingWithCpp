#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,no,s=0,t=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>no;
        if(no==2) t++;
    }
    s=n-t;
    if(t)
    {
        cout<<"2 ";
        t--;
    }
    if(s)
    {
        cout<<"1 ";
        s--;
    }
    for(int i=1;i<=t;i++)
    {
        cout<<"2 ";
    }
    for(int i=1;i<=s;i++)
    {
        cout<<"1 ";
    }
    cout<<endl;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,f=0;
    cin>>t;
    string s;
    cin>>s;

    for(int i=1;i<t;i++)
    {
        if(s[i-1]>s[i])
        {
            s[i-1]='"';
            f=1;
            break;
        }
    }
    if(f==0) s[t-1]='"';
    for(int i=0;i<t;i++)
    {
        if(s[i]=='"') continue;
        cout<<s[i];
    }
    cout<<endl;

    return 0;
}

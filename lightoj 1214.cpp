#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int t,j,d;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>s;
        cin>>d;
        int r=0;
        if(s[0]=='-') j=1;
        else j=0;
        for( j=j;j<s.size();j++)
        {
            r=r*10+(s[j]-'0');
            r=r%d;
        }
        if(r==0) cout<<"Case "<<i<<": divisible"<<endl;

        else cout<<"Case "<<i<<": not divisible"<<endl;
    }

    return 0;
}

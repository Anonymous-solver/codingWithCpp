#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int len=s.size();
    int i,j,b,r,st=0,m,n,ans;
    for(i=0;i<len;i++)
    {
        b=0,r=0,m,n,ans;
        for(j=i;j<len;j++)
        {
            if(s[j]=='B') b++;
            else r++;
            ans=abs(b-r);
            if(ans>st) st=ans,m=i,n=j;
        }
    }
    cout<<m+1<<" "<<n+1<<endl;
}

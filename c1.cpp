#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,cnt=0;
    cin>>n;
    string s;
    cin>>s;
    int len=s.size();
    for(int i=0;i<len; )
    {
        if(s[i]==s[i+1])
        {
            cnt++;
        }
        else i+=2;
    }
    cout<<cnt<<endl;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack <char> v;
    stack <char> v1;
    vector <char> v2;
    vector <char> v3;
    int cn=0,k;
    string s;
    cin>>s;
    cin>>k;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='*' || s[i]=='?')
        {
            cn++;
            if(s[i]=='?') v.push(s[i-1]);
            if(s[i]=='*') v1.push(s[i-1]);
            v3.push_back(s[i-1]);
        }
        else if(s[i+1]!='?' && s[i+1]!='*') v2.push_back(s[i]);

    }
    if(v2.size()>k)
    {
        cout<<"Impossible"<<endl;
        return 0;
    }
    int cnt=s.size()-cn;
    if(cnt==k)
    {
        for(int i=0;i<s.size();i++)
        {
            if(!(s[i]=='*' || s[i]=='?'))
            {
                cout<<s[i];
            }
        }
    }
    else if(cnt<k)
    {
        cnt=k-cnt;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='*')
            {
                for(int j=1;j<=cnt;j++)
                {
                    cout<<s[i-1];
                }
            }
            else if(!(s[i]=='*' || s[i]=='?'))
            {
                cout<<s[i];
            }
        }
    }
    else
    {
        cnt=cnt-k;
        if(cnt<v2.size()) cout<<"Impossible"<<endl;
        else if(cnt==v2.size())
        {
            for(int i=0;i<v2.size();i++)
            {
                cout<<v2[i];
            }
        }
        else
        {
            cnt=v2.size()-cnt;
            if(!(s[i]=='*' || s[i]=='?'))
            {
                cout<<s[i];
            }

        }
    }
}

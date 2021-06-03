#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        int n,no;
        vector <int> v;
        stack <int> s;
        queue <int> q;
        cin>>n;
        for(int j=1;j<=n;j++)
        {
            cin>>no;
            q.push(no);
        }
        for(int j=1;j<=n;j++)
        {
           cin>>no;
           v.push_back(no);
        }
        int k=0,f=0;
        while(!q.empty())
        {
           if(q.front()!=v[k] && k<=v.size()-1) s.push(q.front()),q.pop();
           else if(q.front()==v[k] && k<=v.size()-1)
           {
               k++,q.pop();
               while(s.top()==v[k] && )
               {
                   s.pop();
                   k++;
               }
           }
        }
        if(s.empty()) cout<<"Case "<<i<<":"<<" POSSIBLE"<<endl;
        else cout<<"Case "<<i<<":"<<" IMPOSSIBLE"<<endl;
    }
}

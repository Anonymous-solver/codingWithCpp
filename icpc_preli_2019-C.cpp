#include <bits/stdc++.h>
using namespace std;

int T,N,cnt,p1,no,ch1,ch2,com1,com2,f,id,t,u;
struct student{
    int id,s,p,m,am;
    vector <int> v1;
};
int main()
{
    struct student st[55];
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        cin>>N;
        for(int j=1;j<=N;j++)
        {
            cnt=0;
            cin>>id;
            cin>>st[id].s>>st[id].p>>st[id].m;
            t=st[id].m;
            while(t--)
            {
                cin>>p1;
                st[id].v1.push_back(p1);
                cnt+=p1;
            }
            st[id].am=cnt;
        }
        vector <int> v;
        for(int k=0;k<N;k++)
        {
            cin>>no;
            v.push_back(no);
        }
        ch1=st[v[0]].s+st[v[0]].m;
        ch2=st[v[0]].am+st[v[0]].p;
        f=0;
        for(int k=1;k<v.size();k++)
        {
            com1=st[v[k]].s;
            com2=st[v[k]].p;
            if(ch1<com1) f=1;
            else if(ch1==com1 && ch2>com2) f=1;
            else
            {
                u=0;
                while((com1+1<ch1 && st[v[k]].m>0 ) || (com1+1==ch1 && com2+(st[v[k]].v1[u])>=ch2 && st[v[k]].m>0))
                {
                    com1++;
                    com2+=st[v[k]].v1[u];
                    st[v[k]].m--;
                    u++;
                }
                ch1=com1;
                ch2=com2;
            }
        }
        if(f) cout<<"Case "<<i<<": Say no to rumour >:"<<endl;
        else cout<<"Case "<<i<<": We respect our judges :)"<<endl;
    }
}

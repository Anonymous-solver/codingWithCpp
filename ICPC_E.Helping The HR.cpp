#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int T;
    string s;
    long int h1,m1,s1,h2,m2,s2;
    long int t1,t2,td,sum=0,cnt;
    while(scanf("%ld",&T)!=EOF)
    {
        if(T==0) return 0;
        else
        {
        while(T--)
        {
            cin>>s>>h1>>m1>>s1>>h2>>m2>>s2;
            cnt=0;
            t1=h1*3600+m1*60+s1;
            t2=h2*3600+m2*60+s2;
            if(s[0]=='D')
            {
                if(t1>34200) cnt++;

                if(t1<30600) t1=30600;

                td=t2-t1;

                if(td<28800) cnt++;

            }
            else if(s[0]=='E')
            {
                if(t1>45000) cnt++;

                if(t1<30600) t1=30600;
                td=t2-t1;

                if(td<32400) cnt++;
            }
            sum+=cnt;
        }
        if(sum==0) cout<<"All OK"<<endl;
        else if(sum==1) cout<<"1 Point(s) Deducted"<<endl;
        else if(sum==2) cout<<"2 Point(s) Deducted"<<endl;
        else if(sum==3) cout<<"3 Point(s) Deducted"<<endl;
        else cout<<"Issue Show Cause Letter"<<endl;
        sum=0;
    }
    }
}

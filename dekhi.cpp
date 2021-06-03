#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,i=0,c=-2,result=0,q1,q2,sum,d,temp;
    scanf("%d",&t);
    while(t--)
    {
        int s,q;
        scanf("%d %d",&s,&q);
        vector <int> v(s,0);
        for(int i=0;i<s;i++)
        {
            scanf("%d",&v[i]);
        }
        while(q--)
        {
            scanf("%d %d",&q1,&q2);
            for(int z=q1;z<=q2;z++)
            {
            int m=v[z-1];

            vector <int> v1;
            int r=0;
            i=0;

            while(r<=m)
            {
                temp=r;
                v1.push_back(r);
                r=pow(2,i);
                i++;
                c++;
            }

            reverse(v1.begin(),v1.end());
            d=m-temp;
            i=0;
            while(d!=0)
            {
                if(v1[i]<=d){
                    d=d-v1[i];
                    c++;
                }
                i++;
            }
            result=result+c;
            c=-2;
            }
            printf("%d\n",result);
            result=0;
        }
    }
    return 0;
}

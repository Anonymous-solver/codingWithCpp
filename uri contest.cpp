#include<bits/stdc++.h>
using namespace std;

#define MAX 100000+5

int main()
{
    int t,c,n,q;
    vector<int>num;
    vector<int>test;
    int a,b;
    while(scanf("%d",&t)==1)
    {
        c=1;
        while(t--)
        {
            scanf("%d %d",&n,&q);
            num.clear();
            for(int i=0;i<n;i++)
            {
                scanf("%d",&a);
                num.push_back(a);
            }
            printf("Case %d:\n",c++);
            while(q--)
            {

                scanf("%d %d",&a,&b);
                test.clear();
                if(b-a>1000)printf("0\n");
                else
                {
                    for(int i=a;i<=b;i++)
                    test.push_back(num[i]);
                    sort(test.begin(),test.end());
                    int ans=10000;
                    for(int i=1;i<test.size();i++)
                        ans=min(ans,test[i]-test[i-1]);
                    printf("%d\n",ans);
                }
            }
        }
    }
    return 0;
}

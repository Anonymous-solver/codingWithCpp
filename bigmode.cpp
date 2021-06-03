 #include <bits/stdc++.h>
using namespace std;

int main()
{
    int B,P,M,ans;
    while(scanf("%d%d%d",&B,&P,&M)!=EOF)
    {
        ans=1;
        B%=M;
        while(P)
        {
            if(P&1) ans=(ans*B)%M;
            B=(B*B)%M;
            P=P>>1;
        }
        cout<<ans<<endl;
    }
}

#include <bits/stdc++.h>
using namespace std;
fibonacci(int n)
{
    int f1=0,f2=1,sum=0;
    if(n<1) return 1;
    for(int i=1;i<=n;i++)
    {
        cout<<f2<<" ";
        int next=f1+f2;

        f1=f2;
        f2=next;

    }
    cout<<endl;
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        int sum;
        cin>>n;
        fibonacci(n);
    }
    return 0;
}

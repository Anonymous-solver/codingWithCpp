#include <bits/stdc++.h>
using namespace std;
long long n,k,A,B;
long long pass(long long x)
{
    if(x==1) return 0;
    long long tmp=x%k;
    if(k>x)
    {
        return (x-1)*A;
    }
    if(tmp==0)
    {
        if((x-(x/k))*A<B) return pass(x/k)+(x-(x/k))*A;
        else return pass(x/k)+B;
    }
    else return pass(x-tmp)+(tmp*A);
}
int main()
{
    cin>>n>>k>>A>>B;
    if(k==1 || k>n)
    {
        cout<<(n-1)*A<<endl;
        return 0;
    }
    if(k==n)
    {
        cout<<min(B,(n-1)*A)<<endl;
        return 0;
    }
    cout<<pass(n)<<endl;
    return 0;
}

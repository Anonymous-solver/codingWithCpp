#include <bits/stdc++.h>
using namespace std;
void factorial(int n)
{
    if(n==0) return 1;
    return n*factorial(n-1);
}
int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int ans=factorial(n);
        cout<<"Answer "<<ans<<endl;
    }
    return 0;
}

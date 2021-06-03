#include <bits/stdc++.h>
using namespace std;

int check(int n)
{
    if(n==0)
    {
        cout<<"*";
    }
    else
    {
        cout<<"[";
        check(n-1);
        cout<<",";
        check(n-1);
        cout<<"]";
        cout<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    check(t);
}

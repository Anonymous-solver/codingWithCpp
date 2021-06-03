#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,s=0,cnt=0,d,st,c=0;
    vector <long long> v;
    map <long long ,long long > m;
    cin>>t;
    int arr[t];
    for(long long i=0;i<t;i++)
    {
        cin>>arr[i];
        s=s+arr[i];
        m[arr[i]]++;
    }
    if(m[arr[0]]==t && t>3)
    {
        goto anik;
    }
    st=arr[0];
    for(long long int i=0;i<t;i++)
    {
        if(st==arr[i]) c++;
        s=s-arr[i];
        m[arr[i]]--;
        if(s%2==0)
        {
            d=s/2;
        }
        if(m[d]!=0 && s%2==0)
        {
            v.push_back(i);
            cnt++;
        }
        s=s+arr[i];
        m[arr[i]]++;
    }
    if(c==t && t>3)
    {
        anik:cout<<"0"<<endl;
        return 0;
    }
    cout<<cnt<<endl;
    for(long long i=0;i<v.size();i++)
    {
        cout<<v[i]+1<<" ";
    }
    cout<<endl;
    return 0;
}

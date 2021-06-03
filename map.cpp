#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,size=0,i=0;
    vector <int> v;
    map <int,int> m;
    cin>>t;
    while(t--){
        cin>>n;
    if(m[n]==0){
        v.push_back(n);
        size++;
    }
        m[n]++;
    }
    while(size--){
    cout <<v[i]<<" "<<m[v[i]]<< endl;
    i++;
    }

   return 0;

   }

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,i=1,n;
    map<int,int> m;
    vector <int> v;
    cin>>t;
    while(t--){
       cin>>n;
       if(m[n]==0){
        v.push_back(n);
       }
       m[n]++;
       if(m[n]==2){
       cout<<m[n]<<endl;

       }
    }
    return 0;
}

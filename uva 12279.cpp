#include <bits/stdc++.h>
using namespace std;
int main(){
    int c=1,t;
    while(scanf("%d",&t)!=EOF){
            if(t==0) return 0;
            else{
        int i,r=0,s=0;
        while(t--){
            cin>>i;
            if(i==0){
                r++;
            }
            else
                s++;
        }
        cout<<"Case "<<c<<": "<<s-r<<endl;
        c++;
            }
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
void sieve(int n){
    int arr[100000000];
    for (int i=0;i<100000000;i++)
        arr[i]=1;
    arr[0]=0,arr[1]=0;
    for (int i=2;i<sqrt(n);i++)
        for (int j=j*i;j<n;j+=i)
            arr[j] = 0;
}
int main(){

    int t,n,no,d;
    sieve(no);
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
        int arr[n];

        if(arr[n]==0){
            cout<<"YES"<<endl;
        }
        else{
        for(int i=2;i*i<=n;i++){
            if(arr[i]==1){
                d=n-i;
                if(arr[d]==1 && d!=i){
                     cout<<"YES"<<endl;
                     break;

                   }
            }
        }
        cout<<"NO"<<endl;
        }
    }

    return 0;
}

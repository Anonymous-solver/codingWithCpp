#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n, num;
    cin>>n;
    ll arr[n][n];
    for(ll i=0; i<n; i++){
        for(ll j=0; j<n; j++)
            cin>>arr[i][j];
    }
    for(ll i=0, j=0; i<n-1; i+=2, j+=2){
        map<ll, ll>mp;
        num=arr[i][j+1];
        ll div=-1;
        for(ll k=1; k<=sqrt(num); k++){
            if(num%k==0){
                if(num/k==k){
                    mp[k]++;
                }
                else {
                    mp[k]++;
                    mp[num/k]++;
                }
            }
        }
        num=arr[i+1][j+2];
        for(ll k=1; k<=sqrt(num); k++){
            if(num%k==0){
                if(num/k==k){
                    if(mp[k]!=0 && k!=1) div=k;
                    break;
                }
                else {
                    if(mp[k]!=0 && k!=1) {
                        div=k;
                        break;
                    }
                    else if(mp[num/k]!=0){
                        div=num/k;
                        break;
                    }
                }
            }

        }
        if(div!=-1){
            arr[i+1][j+1]=div;
            arr[i][j]=arr[i][j+1]/div;
            arr[i+2][j+2]=arr[i+1][j+2]/div;
        }
        else{
            arr[i+1][j+1]=1;
            arr[i][j]=arr[i][j+1];
            arr[i+2][j+2]=arr[i+1][j+2];
        }
    }
    for(ll i=0, j=0; i<n; i++, j++){
        cout<<arr[i][j]<<" ";
    }
    return 0;
}

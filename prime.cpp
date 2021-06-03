#include <bits/stdc++.h>
using namespace std;
bool status[1100002];
int prime[10000];
void siv()
{
	int N=1000000;
	int sq=sqrt(N);
	int j=1;
	for(int i=4;i<=N;i+=2) status[i]=1;
	for(int i=3;i<=sq;i+=2){
		if(status[i]==0)
		{
		    prime[j++]=i;
			for(int j=i*i;j<=N;j+=i) status[j]=1;
		}
	}
	prime[0] = 2;
	status[0]=1;
	status[1]=1;
}
int main(){
    siv();

    int t,n,d;

    cin>>t;
    anik:while(t--){
        cin>>n;

        if(status[n]==0){
            cout<<"YES"<<endl;
        }
        else{
        for(int i=2;i<=n/2;i++){
            if(status[i]==0){
                d=n-i;
                if(status[d]==0){

                        if(d!=i){
                     cout<<"YES"<<endl;
                     goto anik;
                        }

                   }
            }
        }
        cout<<"NO"<<endl;
        }
    }

    return 0;
}

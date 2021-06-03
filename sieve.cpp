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
	status[1]=0;
}
int main(){
    siv();

    int t,n,d;

    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            if(!status[i]) cout<<i<<endl;
        }
        cout<<endl;
    }
}


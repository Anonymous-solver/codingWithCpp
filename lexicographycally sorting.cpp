#include <bits/stdc++.h>
using namespace std;
bool status[1100002];
void siv()
{
	int N=1000000;
	int sq=sqrt(N);
	for(int i=4;i<=N;i+=2) status[i]=1;
	for(int i=3;i<=sq;i+=2){
		if(status[i]==0)
		{
			for(int j=i*i;j<=N;j+=i) status[j]=1;
		}
	}
	status[0]=1;
	status[1]=1;
}
int cnt=0;
void p(int n)
{
    for (int i=2;i<=n;i++){
        if(status[n]==0)
        {
            cout<<cnt+1<<endl;
            break;
        }
        else if (n%i==0 && status[i]==0)
        {
            n=n-i;
            cnt++;
            if(n==0)
            {
                cout<<cnt<<endl;
                break;
            }
            p(n);
        }
    }
}
int main()
{
    siv();
    int n;
    cin>>n;

    if(status[n]==0)
    {
        cout<<"1"<<endl;
        return 0;
    }
    p(n);
    return 0;
}


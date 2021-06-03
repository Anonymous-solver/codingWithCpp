#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll L,R,f[19][50][2520];
int T,a[19],num[2525],len;
int gcd(int x,int y){return y?gcd(y,x%y):x;}
ll dp(int x,int s,int y,bool p){
	if(x<0)return !(y%s);
	if(!p&&~f[x][num[s]][y])return f[x][num[s]][y];
	int m=p?a[x]:9;ll res=0;
	for(int i=0;i<=m;++i)
		res+=dp(x-1,i?s*i/gcd(s,i):s,(y*10+i)%2520,p&&i==m);
	return p?res:f[x][num[s]][y]=res;
}
ll ans(ll x){
	for(len=0;x;x/=10,++len)a[len]=x%10;
	return dp(len-1,1,0,1);
}
int main(){
	scanf("%d",&T);
	for(int i=1,s=0;i<=2520;++i)num[i]=2520%i?0:++s;
	while(T--){
		scanf("%I64d%I64d",&L,&R);
		memset(f,-1,sizeof(f));
		printf("%I64d\n",ans(R)-ans(L-1));
	}return 0;
}

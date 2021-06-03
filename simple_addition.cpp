#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll ZeroToN(ll n)
{
	if(n <= 0)
		return 0;
	ll ans = 0, i;
	while(n != 0)
    {
		ans += 45*(n/10);
		for(i = n/10*10+1; i <= n; i++)
        {
            ans += i%10;
        }
		n /= 10;
	}
	return ans;
}
int main()
{
	ll p, q;
	while(cin>>p>>q)
    {
		if(p < 0 && q < 0)
			break;
        cout<<ZeroToN(q)-ZeroToN(p-1)<<endl;
	}
}

#include <bits/stdc++.h>
using namespace std;
#define N 100001
int n, m, w, mn, mx, a[N];
long long b[N], c[2 * N + 100];

bool can(long long mid) {
	memset(c, 0, sizeof c);
	long long have = m;
	for(int i = 0; i < n; ++i)
    {
        b[i] = a[i];
    }
	long long add = 0;
	for(int i = 0; i < n; ++i) {

		if(b[i] < mid)
			add += mid - b[i], have -= mid - b[i], c[i + w] = -(mid - b[i]);
	}

	return have >= 0;
}

int main(){
  mn =INT_MAX;
  mx = 0;
  cin>>n>>m>>w;
  for(int i = 0; i < n; ++i)
  {
      cin>>a[i];
      mn = min(mn, a[i]);
      mx = max(mx, a[i]);
  }
  long long l = mn, r = mx + m, mid, res = -1;
  while(l <= r) {
  	mid = (l + r) / 2;

  	if(can(mid)) res = mid, l = mid + 1;

  	else r = mid - 1;
  }

  cout<<res<<endl;

  return 0;
}

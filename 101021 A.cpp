#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
char s[5];
int main()
{
  ll lo = 1, hi = 1000000;
  while (lo < hi)
  {
    ll mid = (lo+hi+1)>>1;
    printf("%lld\n", mid);
    fflush(stdout);
    scanf(" %s", s);
    if (s[0] == '<') hi = mid-1;
    else lo = mid;
  }
  printf("! %lld\n", lo);
  return 0;
}

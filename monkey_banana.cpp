 #include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n, k;
ll a[301][301];
ll dp[301][301];
ll collect(ll i, ll j)
{
    if (a[i][j]==0) return 0;      // base case
    if (i==k-1) return a[i][j];    // base case

    if(dp[i][j] != -1) return dp[i][j];  // checking if already calculated

    ll r1=0, r2=0;
    r1 = a[i][j]+collect(i+1,j);   // if go to the left child (see the tree)
    r2 = a[i][j]+collect(i+1,j+1); // if go to the right child (     ,,    )

    dp[i][j] = max(r1,r2);         // saving the best result
    return dp[i][j];               // returing the result
}

int main()
{
    ll t;
    cin>>t;
    for(ll s=1; s<=t; s++)
    {
        memset(dp, -1, sizeof(dp));
        memset(a, 0, sizeof(a));
        scanf("%lld", &n);
        k = 2*n - 1;

        for(ll i=0; i<n; i++)              //  taking input pf
            for(ll j=0; j<=i; j++)         //  increasing half.
                scanf("%lld",&a[i][j]);    //  ( upper portion )

        ll l=1;
        for(ll i=n; i<k; i++)              //  taking input of
        {                                  //  decreasing half.
             for(ll j=l; j<n; j++)         //  ( lower portion )
                 scanf("%lld",&a[i][j]);   //  .
             l++;                          //  .
        }                                  //  .

        printf("Case %lld: %lld\n", s, collect(0,0));
    }

    return 0;
}

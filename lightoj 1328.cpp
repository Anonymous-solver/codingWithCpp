#include <bits/stdc++.h>
using namespace std;

long long GetDiffSum( int a[], int n )
{
    long long sum = 0;
    int i, j;
    for( i = 0; i < n; i++ )
        for( j = i + 1; j < n; j++ )
            sum += abs( a[i] - a[j] );
    return sum;
}
int main()
{
    int t,arr[10];
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>arr[j];
        }
        int sum=GetDiffSum(arr,);
        cout<<"Case "<<i<<": "<<sum<<endl;
    }
    return 0;
}

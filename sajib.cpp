#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        clock_t st = clock();
        freopen("output.txt","w",stdout);
        for(int i=0; i<n; i++)
        for(int j=1; j<=n; j*=2 ) printf("");
        clock_t et = clock();
        double time = (double)(et-st);
        freopen("time.txt","a+",stdout);
        printf("n=%d: %lf ms\n",n,time);
    }
    return 0;
}

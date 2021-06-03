#include <bits/stdc++.h>
using namespace std;

int coin []={1,5,10,25,50};
int way[7489];
int main ()
{
    way[0]=1;
    for(int i=0;i<5;i++)
    {
        for(int j=coin[i];j<=7489;j++)
                way[j]+=way[j-coin[i]];
    }
    int a;
    while (scanf("%d",&a)!=EOF)
    {
        cout<<way[a]<<endl;;
    }
    return 0;
}

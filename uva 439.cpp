#include <bits/stdc++.h>
using namespace std;
char c1,c2;
int r1,r2,dc1,dc2;
int X[]={1,1,-1,-1,2,2,-2,-2};
int Y[]={2,-2,2,-2,1,-1,1,-1};
int A[8][8];
#define bound(a,b) (a>=0 &&  a<8 &&  b>=0 &&  b<8)

int main()
{
    while(scanf("%c %d %c %d\n", &c1, &r1, &c2, &r2)==4)
    {
        dc1 = c1 - 'a';
        dc2 = c2 - 'a';
        r1--;
        r2--;

        A[dc1][r1]=0;
        queue < pair <int, int> >Q;
        Q.push(make_pair(dc1,r1));
        while(!Q.empty())
        {
            int x = Q.front().first, y = Q.front().second;
            if(x==dc2 && y==r2) break;
            Q.pop();

            for(int i=0;i<8;i++)
            {
                int a=x+X[i];
                int b=y+Y[i];
                if(bound(a,b))
                {
                    Q.push(make_pair(a,b));
                    A[a][b]=A[x][y]+1;
                }
            }
        }
        printf("To get from %c%d to %c%d takes %d knight moves.\n",c1,r1+1,c2,r2+1,A[dc2][r2]);
    }
}

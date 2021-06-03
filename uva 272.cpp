#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a=0;
    char s;
    while(scanf("%c",&s)!=EOF){


        if(s=='"')
        {
            if(a==0)
            {
                a=1;
                cout<<"``";

            }
            else if(a==1)
                {
                    a=0;
                    cout<<"''";

                }

        }
        else
        {
            cout<<s;
        }
    }
    return 0;
}

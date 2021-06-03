
#include <bits/stdc++.h>

using namespace std;

char d[2003];

int main()
{
    int l, r, len;
    string s;

    cin>>len>>s;

    int i= 0;

    r= len/2;
    l= r-1;

    if(1&len){

        d[len/2]= s[0];
        i= 1;
        l= len/2 -1;
        r= len/2 +1;
    }

    int turn= 1;
    for(; i<len; i++){
        if(turn){
            d[l]= s[i];
            l--;
        }
        else{
            d[r]= s[i];
            r++;
        }

        turn = !turn;
    }

    for( int i=0;i<len;i++)
    {
    cout<<d[i];
    }
    cout<<endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,i,s,c=0,ch,ch1;
    cin>>n;
    int m=n;
    int arr[n];
    int w,b;
    cin>>w>>b;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    d=n/2;
    i=0;
    while(d--)
    {
        if(arr[i]!=arr[n-1] || ((arr[i]==2) || (arr[n-1]==2)))
        {

            if((arr[i]==2) && (arr[n-1]==2))
            {
                c=c+2*(min(w,b));
            }
            else if((arr[i]==2) || (arr[n-1]==2))
            {
            s=abs(arr[i]-arr[n-1]);
            if(s==1) c=c+b;
            else c=c+w;
            }

            else
            {
               cout<<"-1";
               goto anik;
            }
            i++;
            n--;
        }
        else
        {
            i++;
            n--;
        }

    }
    ch=m/2;
    ch1=m%2;


    if(ch1!=0 && arr[ch]==2)
    {
    c=c+min(w,b);
    }

    cout<<c;
    anik:cout<<endl;

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int len;
void finds(int arr[], int st, int ed)
{

    int f = 0;
    if(ed==st)
    {
        if(len==0) len=1;
        return ;
    }
    for(int i = st;i<ed;i++)
    {
        if(arr[i]>arr[i+1])
        {
            f = 1;
            break;
        }
    }
    if(f==0)
    {
        if(len<ed-st+1) len = ed-st+1;
        return ;
    }
    else
    {
        finds(arr,st,(st+ed)/2);
        finds(arr,(st+ed)/2+1,ed);
    }
}

int main()
{
    int n,arr[20];
    len=0;
    cin>>n;
    for(int i =0 ; i < n; i++) cin>>arr[i];
    finds(arr,0,n-1);
    cout<<len<<endl;
}

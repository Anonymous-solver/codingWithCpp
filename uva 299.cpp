
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,c,s,temp;
    cin>>t;
    while(t--)
    {
        cin>>s;
        c=0;
        int arr[s];
        for(int i=0;i<s;i++)
        {
            cin>>arr[i];
        }
        for(int j=0;j<s;j++)
        {
            for(int k=j+1;k<s;k++)
            {
                if(arr[j]>arr[k])
                {
                    temp=arr[j];
                    arr[j]=arr[k];
                    arr[k]=temp;
                    c++;
                }
            }
        }
        cout<<"Optimal train swapping takes "<<c<<" swaps."<<endl;
    }
    return 0;
}

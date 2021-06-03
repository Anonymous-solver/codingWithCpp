#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s,c=0,sum=0,f=0,g=0,age=0;
    cin>>s;
    int arr[s];
    for(int i=0;i<s;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[i]==arr[j] || arr[j]==arr[i]+1)
            {
                f++;
            }
            if(arr[i]==arr[j] || arr[j]==arr[i]-1)
            {
                g++;
            }

        }
        for(int j=i+1;j<s;j++)
        {
            if(arr[i]==arr[j] || arr[j]==arr[i]+1)
            {
                f++;
            }
            if(arr[i]==arr[j] || arr[j]==arr[i]-1)
            {
                g++;
            }
        }
        if(f>g) sum=f;
        else sum=g;
        if(sum>age)
        {
            age=sum;

        }
        sum=0;
        f=0;
        g=0;

    }
    cout<<age+1<<endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
 int t,c,s;
 int r1,r2,num;
 cin>>t;
 while(t--)
 {
     cin>>r1>>r2;
     s=0;

     for(int i=r1;i<=r2;i++)
     {
         c=0;
         for(int j=1;j<=sqrt(i);j++)
         {
             if(i%j==0) c++;

         }
         int temp=sqrt(i);
         if(temp==sqrt(i)) c=c*2-1;
         else c=c*2;
         if(c>s)
         {
             s=c;
             num=i;
         }
     }
     cout<<"Between "<<r1<<" and "<<r2<<", "<<num<<" has a maximum of "<<s<<" divisors."<<endl;

 }
 return 0;
}

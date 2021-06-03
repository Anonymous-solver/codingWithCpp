#include <bits/stdc++.h>
using namespace std;

int main()
{
    char *input,*l,*r,*temp,production[50][50],production1[50][50];
    cout<<"Enter the Productions"<<endl;
    int i=0,j=0,f=0,cnt=0,cnt1=0;
    cin>>input;
    l=strtok(input,"->");
    r=strtok(NULL,"->");
    temp=strtok(r,"|");
    while(temp){
        if(temp[0]==l[0])
        {
            sprintf(production[i++],"%s%s'",temp+1,l);
            f=1;
            cnt++;
        }
        else
        {
            sprintf(production1[j++],"%s%s'",temp,l);
            cnt1++;
        }
        temp=strtok(NULL,"|");
    }
    if(!f) cout<<"NO LEFT RECURSION"<<endl;
    else
    {
        cout<<l<<"->";
        for(int j=0;j<cnt1;j++)
        {
            if(j==cnt1-1) printf("%s",production1[j]);
            else printf("%s|",production1[j]);
        }

        cout<<endl;
        cout<<l<<"'->";
        for(int i=0;i<cnt;i++)
        {
            if(i==cnt-1) printf("%s",production[i]);
            else printf("%s|",production[i]);
        }
        cout<<"|\356\0";
    }
}

#include <bits/stdc++.h>
using namespace std;

struct student
{
    string name;
    int roll;
    int marks;
};
int main()
{
    struct student s[10000],temp;
    int i,j,n;

    cin>>n;
    for(i=0;i<n;i++)
        cin>>s[i].name>>s[i].roll>>s[i].marks;
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            if(s[j].marks<s[j+1].marks)
            {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
            else if(s[j].marks==s[j+1].marks)
            {
                if(s[j].name>s[j+1].name)
                {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
                }
                else if((s[j].name==s[j+1].name) && (s[j].roll>s[j+1].roll))
                {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
                }
            }
        }
    }
    for(j=0;j<n;j++) cout<<s[j].name<<" "<<s[j].roll<<" "<<s[j].marks<<endl;
}

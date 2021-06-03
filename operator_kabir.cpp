#include <bits/stdc++.h>
using namespace std;

// All in one
int main(){
    map<char, int>mp;
    string s, idn="", idn2="", num="", op="";
    cin>>s;
    int flag=0;
    int sz=s.size();
    int pls=0, mn=0, mul=0, div=0;
    for(int i=0; i<sz; i++){
        if(s[i]=='='){
            op+=s[i];
            flag=1;
        }
        if(flag==0)
            idn+=s[i];

        if(flag==1){
            if(s[i]>='a' && s[i]<='z'){
                idn2+=s[i];
                idn2+=" ";
            }

            if(s[i]=='0' || s[i]=='1' || s[i]=='2' || s[i]=='3' || s[i]=='4' || s[i]=='5' || s[i]=='6' || s[i]=='7' || s[i]=='8' || s[i]=='9'){
                num+=s[i];
            }

            if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
                if(mp[s[i]]==0){
                    op+=s[i];
                    mp[s[i]]++;
                }

            }
            if(s[i]=='+')
                pls++;
            if(s[i]=='-')
                mn++;
            if(s[i]=='/')
                div++;
            if(s[i]=='*')
                mul++;

        }
    }
    cout<<idn<<endl;
    cout<<"Operators "<<op<<endl;
    cout<<"Identifiers "<<idn2<<endl;
    cout<<"Numbers "<<num<<endl;
    cout<<"Plus = "<<pls<<endl;
    cout<<"Minus = "<<" "<<mn<<endl;
    cout<<"Mul = "<<" "<<mul<<endl;
    cout<<"Div = "<<" "<<div<<endl;
    return 0;

}



#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    string temp="";
    set <string> st;
    while(getline(cin,s)){
    for(int i=0;i<=s.size();i++){
        if(s[i]>='A' && s[i]<='Z'){
                s[i]=s[i]+32;
        temp+=s[i];
    }
    else if(s[i]>='a' && s[i]<='z'){
        temp+=s[i];
    }
    else{
        if(temp.size()>0)

                st.insert(temp);
                temp="";
    }
    }
    }

    set<string> :: iterator it;
    for(it=st.begin();it!=st.end();it++){
        cout<<*it<<endl;
    }
    return 0;

}

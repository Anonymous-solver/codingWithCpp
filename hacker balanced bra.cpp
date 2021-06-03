#include <bits/stdc++.h>
using namespace std;
int main(){
    stack<char>s;
    string c;
    long long int n;
    cin>>n;
    while(n--){
        cin>>c;
        for(long long int i=0;i<c.size();i++){
            if(s.empty()){
            if(c[i]==']' ||c[i]=='}' ||c[i]==')' ){
                s.push(c[i]);
            }

            }
            if(c[i]=='[' || c[i]=='{' || c[i]=='('){
                s.push(c[i]);
            }
            else if(c[i]==']'){
                c[i]='[';
                if(s.top()==c[i]){
                    s.pop();
                }
                else
                {
                    s.push(']');
                }
            }
             else if(c[i]=='}'){
                c[i]='{';
                if(s.top()==c[i]){
                    s.pop();
                }
                else
                {
                    s.push('}');
                }
             }
             else if(c[i]==')'){
                c[i]='(';
                if(s.top()==c[i]){
                    s.pop();
                }
                else
                {
                    s.push(')');
                }
             }
            }
            if(s.empty()){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
            while(!s.empty()){
                    s.pop();
                }
        }
    return 0;
}

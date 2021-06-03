/// Token identifier with repeat's counter
#include <bits/stdc++.h>
using namespace std;

bool isOperator(char c){
    if(c=='+' || c=='-' || c=='*' || c=='/' || c=='=')
        return true;
    return false;
}

int main(){

    string exp;
    getline(cin,exp);
    int len = exp.size();
    map< string, int > cnt;
    for(int i=0; i<len; i++) {
        string temp="";
        while(exp[i]!=' ' && !isOperator(exp[i]) && i<len){
            temp+=exp[i++];
        }
        if(temp.size()>0){
            if(temp[0]>='a' && temp[0]<='z'){
            cout << temp << " : identifier (operand)\n";
            }
            else if(temp[0]>='0' && temp[0]<='9'){
                cout << temp << " : number\n";
            }
            cnt[temp]++;
        }
        if(isOperator(exp[i])){
            cout << exp[i] << " : operator\n";
            temp=""; temp+=exp[i];
            cnt[temp]++;
        }
    }
    cout << "Repeats:\n";
    map< string, int >::iterator it;
    for(it=cnt.begin(); it!=cnt.end(); it++){
        if(it->second > 1){
            cout << it->first << " : " << it->second << endl;
        }
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main(){

    string email, test = "";
    int i,flag = 0;
    cin >> email;
    int sz = email.size();
    if(email[0] >= 'a' && email[0] <= 'z'){
        for(i=1; i<sz; i++){
        if(email[i]=='#'){
            flag = 1;
            break;
        }
        if(email[i]=='-'){
            if(email[i+1] == '_' || email[i+1] == '-' || email[i+1] == '@' || email[i+1] == '.'){
                flag = 1;
                break;
            }
        }
        if(email[i]=='_'){
            if(email[i+1] == '_' || email[i+1] == '-' || email[i+1] == '@' || email[i+1] == '.'){
                flag = 1;
                break;
            }
        }
        if(email[i]=='.'){
            if(email[i+1] == '_' || email[i+1] == '-' || email[i+1] == '@' || email[i+1] == '.'){
                flag = 1;
                break;
            }
        }
        if(email[i]=='@'){
            if(email[i+1] == '_' || email[i+1] == '-' || email[i+1] == '@' || email[i+1] == '.'){
                flag = 1;
                break;
            }
        }
        }
        if(flag==0){
            for(i=0; i<sz; i++){
                if(email[i]=='@'){
                    for(i=i+1; i<sz; i++){
                        test += email[i];
                    }
                }
            }
            if(test == "gmail.com" || test == "yahoo.com" || test == "outlook.com"){
                cout << "YOUR MAIL IS VALID" << endl;
            }
            else
                cout << "YOUR MAIL IS INVALID" << endl;
        }
        else cout << "YOUR MAIL IS INVALID" << endl;

    }
    else cout << "YOUR MAIL IS INVALID" << endl;

    return 0;
}

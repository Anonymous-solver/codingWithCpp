#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,op="",var="",iden="",num="";
    cin >> s;

    int length=s.size();
    int start;
    for(int i=0;i<length;i++)
    {
        if(s[i]=='=')
        {
            start=i+1;
            break;
        }
    }
    map <char,int> ch;
    for(int i=start-1;i<length;i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
                if(ch[s[i]]<1) var+=s[i];
                ch[s[i]]++;
        }
        else if(s[i]>='0' && s[i]<='9'){
                if(ch[s[i]]<1) num+=s[i];
                ch[s[i]]++;
        }
        else if(s[i]=='+' || s[i]=='*' || s[i]=='/' || s[i]=='=')
        {
                if(ch[s[i]]<1) op+=s[i];
                ch[s[i]]++;
        }
    }

    cout << "Identifier will be= ";
    for(int i=0;i<start-1;i++) cout << s[i];
    cout << endl;

    cout << "Variable= ";
    for(int i=0;i<var.size();i++)
    {
            if(i==var.size()-1)
            {
                if(ch[var[i]]>1) cout << var[i] << " " << ch[var[i]];
                else cout << var[i];
            }
            else
            {
                if(ch[var[i]]>1) cout << var[i] << " " << ch[var[i]] << ",";
                else cout << var[i] << ",";
            }
    }
    cout << endl;

    cout << "Number= ";
    for(int i=0;i<num.size();i++){
            if(i==num.size()-1){
                if(ch[num[i]]>1) cout << num[i] << " " << ch[num[i]];
                else cout << num[i];
            }
            else{
                if(ch[num[i]]>1) cout << num[i] << " " << ch[num[i]] << ",";
                else cout << num[i] << ",";
            }
    }
    cout << endl;

    cout << "Operator= ";
    for(int i=0;i<op.size();i++)
    {
            if(i==op.size()-1)
            {
                if(ch[op[i]]>1) cout << op[i] << " " << ch[op[i]];
                else cout << op[i];
            }
            else
            {
                if(ch[op[i]]>1) cout << op[i] << " " << ch[op[i]] << ",";
                else cout << op[i] << ",";
            }
    }
}

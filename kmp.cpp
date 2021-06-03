#include <bits/stdc++.h>
using namespace std;

int main(){

	int t;
	string s;
	cin >> t;

	while(t--){
		cin >> s;
		int a[s.length()];
		a[0]=0;
		for(int j=0, i=1; i<s.length(); ){
			if(s[j]==s[i]){
				a[i] = j+1;
				j++;
				i++;
			}
			else if(s[j]!=s[i]){
				if(j>0){
                    j=a[j-1];
				}
                else{
                    a[i]=0;
                    i++;
                }
			}
		}
		for(int i=0; i<s.length(); i++)
            cout << a[i] << " ";
        cout << endl;
	}

	return 0;
}

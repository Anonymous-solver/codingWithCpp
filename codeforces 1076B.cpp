#include <bits/stdc++.h>
using namespace std;

int main() {
	long long no;
	cin >> no;
	for(long long i = 2; i * i <= no; i++){
		if(no % i == 0){
			cout << (no - i)/2 + 1;
			return 0;
		}
	}
	cout << 1;
	return 0;
}

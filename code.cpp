#include <bits/stdc++.h>
using namespace std;
int main()
{
	int array[ ]={ }, n, i, t,p,temp,j;
	scanf("%d",&t);
	while(t--){
	scanf("%d", &n);
	array[n+1];
	for (i =1; i <=n; i++){
		scanf("%d", &array[i]);
	}
	for(i=1;i<=n;i++){
		for(j=i+1;j<n;j++){
			if(array[i]>array[j]){
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
	scanf("%d",&p);
    for (i =1; i <=n; i++){
		if(i==p){
			printf("%d\n",array[i]);
			break;
		}
	}
	}
	return 0;
}

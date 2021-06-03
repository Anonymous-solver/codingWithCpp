#include <stdio.h>
int main(){
    long long int t,x,y,k,i,temp;
    scanf("%lld",&t);
    for( i=1;i<=t;i++){
        scanf("%lld %lld %lld",&x,&k,&y);
        if(x>y){
            temp=x;
            x=y;
            y=temp;
        }
        if(k>x && k<y){
            printf("case #%lld: Yeah!\n",i);
        }
        else
            printf("case #%lld: Nah!!\n",i);
    }
    return 0;
}

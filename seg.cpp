#include <bits/stdc++.h>
#define mx 100007
using namespace std;

int arr[mx];
int tree[3*mx];

void init(int node, int b, int e){
    if(b==e){
        tree[node]=arr[b];
        return;
    }
    int mid=(b+e)/2;
    int left=node*2;
    int right=node*2+1;
    init(left, b, mid);
    init(right, mid+1, e);
    tree[node]=max(tree[left], tree[right]);
}

int query(int node, int b, int e, int i, int j){
    if(b>j || e<i)
        return tree[node];
    if(b>=i && e<=j){
        return tree[node];
    }
    int mid=(b+e)/2;
    int left=node*2;
    int right=node*2+1;
    int p=query(left, b, mid, i, j);
    int q=query(right, mid+1, e, i, j);
    return max(p, q);
}

int main(){
    int T, t=1;
    scanf("%d", &T);
    for(int i=0; i<T; i++){
        int n, q;
        scanf("%d %d", &n, &q);
        for(int j=1; j<=n; j++){
            scanf("%d", &arr[j]);
        }
        init(1, 1, n);
        int a, b;
        printf("Case %d:\n", t);
        for(int j=0; j<q; j++){
            scanf("%d %d", &a, &b);
            printf("%d\n", query(1, 1, n, a, b));
        }
        t++;
    }
    return 0;

}

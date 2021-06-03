
#include<bits/stdc++.h>
using namespace std;

#define PAIR pair<int,int>

int visit[22][22],dis[22][22],T,m,n;
int dirx[] = {-1,1,0,0};
int diry[] = {0,0,-1,1};
char str[22][22];

void bfs(int i,int j){
    for(int x=0; x < m; x++){
        for(int y = 0; y < n; y++) {
            dis[x][y]=500;
            visit[x][y]=0;
        }
    }
    visit[i][j] = 1;
    dis[i][j] = 0;

    queue<PAIR>q;
    q.push(make_pair(i,j));
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int k = 0; k < 4; k++){
            i = x + dirx[k];
            j = y + diry[k];
            if(i > -1 && i < m && j >-1 && j<n && str[i][j] !='#' && str[i][j]!= 'm' && visit[i][j] == 0){
                dis[i][j] = min(dis[x][y]+1,dis[i][j]);
                cout<<dis[i][j]<<endl;
                visit[i][j] = 1;
                q.push(make_pair(i,j));
            }
        }
    }
}
int main(){
    int homX,homY;
    cin >> T;
    for(int t = 1; t<= T; t++){
        cin >> m >> n;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                cin >> str[i][j];
                if(str[i][j] == 'h'){
                    homX = i;
                    homY = j;
                }
            }
        }
        int mxa,mxb,mxc;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                 if(str[i][j]=='a'){
                    bfs(i,j);
                    mxa = dis[homX][homY];
                 }
                 else if(str[i][j]=='b'){
                    bfs(i,j);
                    mxb = dis[homX][homY];
                 }
                 else if(str[i][j]=='c'){
                    bfs(i,j);
                    mxc = dis[homX][homY];
                 }
            }
        }
        cout << "Case " << t << ": " << max(max(mxa,mxb),mxc) << endl;
    }
    return 0;
}

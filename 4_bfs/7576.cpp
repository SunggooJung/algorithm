#include <iostream>
#include <utility>
#include <queue>

using namespace std;
int board[1002][1002];
int dist[1002][1002];
int dx[4]={-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
int m,n;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    queue<pair<int,int> > Q;

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> board[i][j];
            if(board[i][j]==1) Q.push({i,j});
            if(board[i][j]==0) dist[i][j] = -1;
        }
    }

    while(!Q.empty()){
        pair<int,int> cur = Q.front();
        Q.pop();
        for(int dir=0; dir<4; dir++){
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];
            if(nx<0 || nx>m || ny<0 || ny>n) continue;
            if(dist[nx][ny]!=-1) continue;
            dist[nx][ny] = dist[cur.first][cur.second]+1;
            Q.push({nx,ny});
        }
    }
    int ans = 0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(dist[i][j] == -1){
                cout << -1 << endl;
                return 0;
            }
            ans = max(ans, dist[i][j]);
        } 
    } 
    cout << ans;
    return 0;
}

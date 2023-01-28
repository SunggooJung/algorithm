#include <iostream>
#include <queue>
#include <utility>
using namespace std;

#define X first
#define Y second

int board[502][502];
bool vis[502][502];

int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int r,c;//rows,cols
int main(void){
    cin >> r >> c;    
    //insert input values to board
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>board[i][j];
        }
    } 
    queue<pair<int,int> > Q;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(board[i][j]!=1 || vis[i][j]) continue;
            vis[i][j] = 1;
            Q.push({i,j});

            while(!Q.empty()){
                pair<int, int> cur = Q.front(); 
                Q.pop();
                cout << "(" << cur.X << ", " << cur.Y << ") -> ";
                for(int dir=0; dir<4; dir++){
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    
                    if(nx<0 || nx >r || ny<0 || ny >c) continue;
                    if(vis[nx][ny] || board[nx][ny]!=1) continue;

                    vis[nx][ny]=1;
                    Q.push({nx,ny});
                }
            }
        }
    }
    return 0;
}

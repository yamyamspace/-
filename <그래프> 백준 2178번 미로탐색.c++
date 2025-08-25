#include <iostream>
#include <queue>

using namespace std;
bool visited[101][101]={0};
int maze[101][101];
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
int dist[101][101];// 거리 저장
int n, m;
void bfs(int x, int y){
    
    queue <pair<int, int>> q;
    int cur = maze[x][y];
    q.push({x,y});
    visited[x][y]=true;
    dist[x][y]=1; //시작점 거리=1칸

    while(!q.empty()){
        
        x= q.front().first;
        y= q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int nx = x+dx[i];
            int ny = y+dy[i];
            if(nx>=0&&nx<n&&ny>=0&&ny<m){
                if(maze[nx][ny]==1&&!visited[nx][ny]){
                    visited[nx][ny]=true;
                    dist[nx][ny]=dist[x][y]+1;
                    q.push({nx, ny});
                }
            }
            
        }
    }
}
int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        string line;
        cin>>line;
        for(int j=0;j<m;j++){
            maze[i][j]=line[j]-'0';// 입력이 붙어서 들어오므로 문자형으로 받아야됨.
        }
    }
    bfs(0,0);
    cout<<dist[n-1][m-1];
}

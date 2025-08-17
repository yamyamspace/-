#include <iostream>
#include <vector>
#include <queue>

using namespace std;
vector<int> graph[101];
bool visited[101];

int bfs(int v){
    queue <int> q;
    queue<int> save;
    q.push(v);
    visited[v]=true;
    
    while(!q.empty()){
        int cur =q.front();
        save.push(cur);
        q.pop();
        for(auto next: graph[cur]){
            if(!visited[next]){
                visited[next]= true;
                q.push(next);
            }
        }
    }
    return save.size()-1;
}
int main(){
    int n, adj;
    cin>>n;
    cin>>adj;
    for(int i=0;i<adj;i++){
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    cout<<bfs(1);
}

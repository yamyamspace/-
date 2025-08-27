#include <iostream>
#include <queue>

using namespace std;
int main(){
    int n;
    cin>>n; 
    priority_queue<int, vector<int>, greater<int>> pq;//priority_queue는 최대 힙 기준인데 최소힙 만들려면 3번째 인자가 필요함
    while(n--){
        int x;
        cin>>x;
        if(x==0){
            if(pq.empty()){
            cout<<0<<"\n";
            }
            else if(!pq.empty()){
                cout<<pq.top()<<"\n";
                pq.pop();
            }
        }
        else{
            pq.push(x);
        }
    }
    return 0;
}

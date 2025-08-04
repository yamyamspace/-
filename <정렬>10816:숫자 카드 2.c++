//정렬 + 개수 세기

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){
    ios::sync_with_stdio(false); //속도 빠르게(입출력시 버퍼 flush 자동화 끊음)
    cin.tie(0);
    
    int n,m;
    cin>>n;
    vector<int> cards(n);
    for(int i=0;i<n;i++){
        cin>>cards[i];
    }
    
    sort(cards.begin(), cards.end());
    cin>>m;
    vector<int> target(m);
    for(int i=0;i<m;i++){
        cin>>target[i];
        auto upper = upper_bound(cards.begin(), cards.end(), target[i]);
        auto lower = lower_bound(cards.begin(), cards.end(), target[i]);
        cout<<upper-lower<<" "; // 정렬 후 사용 가능
    }
    return 0;

}

#include <iostream>
#include <vector>

using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int, int>> dp(41);
    dp[0]={1,0};
    dp[1]={0,1};
    
    dp[2]={1,1};
    dp[3]={1,2};
    for(int i=2;i<=40;i++){
        dp[i].first=dp[i-1].first+dp[i-2].first;
        dp[i].second=dp[i-1].second+dp[i-2].second;
    }
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        cout<<dp[a].first<<" "<<dp[a].second<<"\n";
    }
}

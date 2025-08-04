#include <iostream>
#include <vector>

using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> dp(n+1);
    dp[1]=0;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+1;// 기본
        if(i%2==0){
            dp[i]=min(dp[i],dp[i/2]+1); //dp[i/2]는 i를 2로 나눈 연산을 이미 해버려서 그거 카운트하느라+1함.
        }
        if(i%3==0){
            dp[i]= min(dp[i],dp[i/3]+1);
        }
    }
    cout<<dp[n]<<"\n";
}

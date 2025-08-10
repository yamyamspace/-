#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    int tc;
    cin>>tc;
    for(int i=0;i<tc;i++){
        int n;
        cin>>n;
        
        vector<pair<int, int>> p(n);
        for(int j=0;j<n;j++){
            int document, interview;
            cin>>document>>interview;
            p[j]= {document, interview};
        }
        sort(p.begin(), p.end());
        int count = 1;
        int minsecond = p[0].second;
        for(int j=1;j<n;j++){
            if(minsecond>=p[j].second){
                count++;
                minsecond = p[j].second;
            }
        }
        cout<<count<<"\n";
    }
}// 처음에 이전항과 비교하다가, "실질적으로 채용되는" 앞 사원들과 비교+ 채용된 사원 업데이트
//i번째 항과 i+1번째 항을 일대일로 비교하면 탈락한 사람들도 비교 대상에 포함되어 이상한 결과를 얻을 수 있음.

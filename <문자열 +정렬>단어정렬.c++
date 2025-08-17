#include <iostream>
#include <set>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
set<string> s;
int main(){
    int n;
    cin>>n;
    string str;
    for(int i=0;i<n;i++){
        cin>>str;
        s.insert(str); //set -> 중복제거, 사전순 정렬이 일어나지만
    }
    vector<string> v(s.begin(), s.end());//set->vector로 복사
    sort(v.begin(), v.end(),[](auto&a,auto&b){
        if(a.size()==b.size()) return a<b;    
        return a.size()<b.size();// 길이 기준 정렬시 길이가 같은 단어끼리 사전순 보장안됨. 따라서 길이 같은애들끼리 사전순 정렬하는 코드(위의 코드) 필요
    });
    for(string x:v){
        cout<<x<<"\n";
    }
}

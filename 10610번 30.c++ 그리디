//정렬 과정이 그리디 알고리즘
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s;

    cin>>s;
    int sum = 0;
    int max = 0;
    bool hasZero = false;
    
    for(int i=0;i<s.size();i++){
        sum += s[i]-'0';
        if(s[i]=='0') hasZero=true;
    }
    if(sum%3 != 0||!hasZero){
        cout<<-1;
        return 0;
    }
    else {
       sort(s.begin(), s.end());
       reverse(s.begin(),s.end());
       cout<<s;
    }
}
        

#include <iostream>
#include <vector>
#include <set>

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a,b;
    int count =0;
    cin>>a>>b;
    vector<int> vec(a);
    set<int> s;
    for(int i=0;i<a;i++){
        cin>>vec[i];
        s.insert(vec[i]);
    }
    for(int i=0;i<b;i++){
        int x;
        cin>>x;
        if(s.find(x)!=s.end()){// 찾았다!
            count++;
        }
    }
    cout<<a+b-2*count;
}

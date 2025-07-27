#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    int n;
    int max = 0;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    sort(vec.begin(), vec.end());
    
    for(int i=0;i<n;i++){
        if(max<vec[i]*(n-i)){
            max = vec[i]*(n-i);
        }
    }
    cout<<max;
}

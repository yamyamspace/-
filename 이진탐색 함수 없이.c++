#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> trees(n);
    
    for(int i=0;i<n;i++){
        cin>>trees[i];
    }

    sort(trees.begin(), trees.end());
    int left = 0;
    int right = trees[n-1];
    int result = 0;

    while(left<=right){
        long long sum =0;
        int mid = (left+right)/2;

        for(int i=0;i<n;i++){
            if(mid<trees[i]){
                sum+= trees[i]-mid;
            }
        }
        if(sum<m){
            right = mid-1;
        }
        if(sum>=m){
            result = mid;
            left = mid+1;
        }

    }
    cout<<result;
}

#include<iostream>
#include <vector>
#include <cmath>

using namespace std;
bool binarySearch(int N, vector<int> &S);

int main(){
    vector<int> S={4,5,62,6,4,7,1};
    cout<<"5가 S안에 있을까?";

    if(binarySearch(5, S)){
        cout<<"답을 찾았다!";
    };
}
bool binarySearch(int N, vector<int> &S){
    auto first = S.begin();
    auto last = S.end();

    while (true){
        auto range_length = distance(first, last);
        auto mid = first + floor(range_length/2);

        if(*mid==N){
            return true;
        }
        else if(*mid<N){
            first = mid+1;
        }
        else if(*mid>N){
            last = mid-1;
        }
        if(range_length==1)
        return false;
    }
}

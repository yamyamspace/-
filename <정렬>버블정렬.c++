//오름차순 1,2,3,4,5 작은 것부터 정렬
//버블 정렬 이용
#include <iostream>
using namespace std;

int arr[100000];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int j=0;j<=n-1;j++){
        for(int i=0;i<n-1-j;i++){
            if (arr[i]<arr[i+1]){
                continue;
            }
            if (arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp; 
            } 
        } 
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\n";
    }
    return 0;
}

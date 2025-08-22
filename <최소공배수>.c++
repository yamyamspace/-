#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        int minimum=min(a,b);
        int maximum=0;
        int result=1;
        
        for(int i=2;i<=minimum;i++){// 공통으로 나눠지는 값들과 남은 값들 다 곱하기
            while(a%i==0&&b%i==0){ //중복약수 처리 while문으로 처리
                result*=i;
                a/=i;
                b/=i;
            }
        }
        result*=(a*b);
        cout<<result<<"\n";
    }
    return 0;
}

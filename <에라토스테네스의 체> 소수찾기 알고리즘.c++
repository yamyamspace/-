//소수 찾는 알고리즘 =에라토스테네스의 체= 2부터 시작해서 배수를 모두 지운다.
//-> isPrime[i]만 찾으면 되므로 시간복잡도 O(1)
#include <iostream>
#include <vector>
using namespace std;
int main(){
    while(1){
        int count=0;
        int n;
        cin>>n;
        if(n==0){
            return 0;
        }
        vector<bool> isPrime(2*n+1, true);
        isPrime[0]=false;
        isPrime[1]=false;
        for(int i=2;i*i<=2*n;i++){
            if(isPrime[i]){
                for(int j= i*i;j<=2*n;j+=i){ //j+=i는 현재 소수 i의 모든 배수를 지우는 것, j=i*i에서 시작하는 이유는 그 전 배수는 이미 처리됐기 때문.
                    isPrime[j]=false;
                }
            }
           
        }
        for(int i=n+1;i<=2*n;i++){
            if(isPrime[i]) {
                count++;
            }
        }
        cout<<count<<"\n";
    }
return 0;
}

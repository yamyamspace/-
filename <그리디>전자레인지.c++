#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int acount = 0;
    int bcount = 0;
    int ccount = 0;
    int a = 300;
    int b = 60;
    int c = 10;
    while(n>0){
        if(n>=300){
            n-=a;
            acount++;
        }
        else if(n>=60){
            n-=b;
            bcount++;
        }
        else if(n>=10){
            n-=c;
            ccount++;
        }
        else {
            cout<<-1;
            return 0;
        }
    }
    cout<<acount<<" "<<bcount<<" "<<ccount;
}

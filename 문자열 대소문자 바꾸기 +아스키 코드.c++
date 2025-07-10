#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++){
        if(65<=str[i] && str[i]<=90){
            str[i] = tolower(str[i]);
        }
        else if(97<=str[i] && str[i]<=122){
            str[i] = toupper(str[i]);
        }
    }
    for(int i=0;i<str.length();i++){
        cout<<str[i];
    }
    return 0;
}

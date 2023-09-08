#include<iostream>
using namespace std;
bool evenodd(int n){
    // switch(n&1){
    //     case 1: return false;
    //     break;
    //     case 0: return true;
    //     break;
    // }
    if(n%2==0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int a;
    cin>>a;
    if(evenodd(a)==1){
        cout<<"Even number"<<endl;
    }
    else{
        cout<<"Odd number"<<endl;
    }
    return 0;
    
}
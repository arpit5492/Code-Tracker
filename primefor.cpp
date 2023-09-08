#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int isPrime=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            isPrime=0;
            break;
        }
    }
    if(n==1){
        cout<<n<<" is not a prime number";
    }
    else if(isPrime==0){
        cout<<n<<" is not a prime number";
    }
    else{
        cout<<n<<" is a prime number";
    }
}
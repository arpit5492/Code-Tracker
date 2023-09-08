#include<iostream>
using namespace std;
int main(){
    long long int n;
    cout<<"Enter the number: ";
    cin>>n;
    long long int i=1;
    long long int sumeven=0;
    long long int sumodd=0;
    while(i<=n){
        if((i&1)==0){
            cout<<i<<" ";
            sumeven+=i;
        }
        else if((i&1)==1){
            // cout<<i<<" ";
            sumodd+=i;
        }
        i+=1;
    }
    cout<<endl;
    cout<<"Sum of even numbers: "<<sumeven<<endl;
    cout<<"Sum of odd numbers: "<<sumodd<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int power(){
    int num1,num2;
    cin>>num1>>num2;
    int ans=1;
    for(int i=1;i<=num2;i++){
        ans=ans*num1;
    }
    return ans;
}
int main(){
    // int a,b;
    // cin>>a>>b;
    // cout<<"Power of "<<a<<" & "<<b<<" is: "<<power(a,b)<<endl;
    int ans = power();
    cout<<"Answer is: "<<ans<<endl;

    int a = power();
    cout<<"Answer is: "<<a<<endl;

    int b = power();
    cout<<"Answer is: "<<b<<endl;
}
#include<iostream>
using namespace std;
int fact(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*i;
    }
    return ans;
}
int ncr(int n,int r){
    int a;
    a = fact(n)/(fact(r)*fact(n-r));
    return a;
}
int main(){
    int a,b;
    cin>>a>>b;
    int ans=ncr(a,b);
    cout<<"Answer is: "<<ans<<endl;
}
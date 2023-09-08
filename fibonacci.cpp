#include<iostream>
using namespace std;
int main(){
    int a=0,b=1;
    int n=10;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n;i++){
        int nxtno=a+b;
        cout<<nxtno<<" ";
        a=b;
        b=nxtno;
    }
    cout<<endl;
}
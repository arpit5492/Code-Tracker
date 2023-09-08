#include<iostream>
using namespace std;
void update(int a){
    int ans=a*a;
    cout<< ans<<endl;
}
int main(){
    int a=14;
    update(a);
    // a=update(a);
    cout<<a<<endl;
}
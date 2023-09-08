#include<iostream>
using namespace std;
int main(){
    // int i=1;
    // int a = i++;
    // cout<<a<<endl;
    // cout<<i<<endl;
    // int a,b=1;
    // a=10;
    // if(++a){
    //     cout<<b<<endl;
    // }
    // else{
    //     cout<<++b<<endl;
    // }
    int a=1;
    int b=2;
    if(--a > 0 && ++b > 2){ //--> The o/p is Yayy!! won 0 2 bc in if statement already the first part is true, so the value of b is not changed.
        cout<<"Yayy!! won"<<endl;
    }
    else{
        cout<<"Not won"<<endl;
    }
    cout<<a<<" "<<b<<endl;
}
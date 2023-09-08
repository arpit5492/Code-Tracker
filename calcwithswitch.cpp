#include<iostream>
using namespace std;
int main(){
    char ch;
    int a,b;
    cout<<"Enter the operation you wanna perform: ";
    cin>>ch;
    cout<<"Enter the two numbers: ";
    cin>>a>>b;
    switch(ch){
        case '+': cout<<a<<"+"<<b<<"="<<a+b<<endl;
        break;
        case '*': cout<<a<<"*"<<b<<"="<<a*b<<endl;
        break;
        case '-': cout<<a<<"-"<<b<<"="<<a-b<<endl;
        break;
        case '%': cout<<a<<"%"<<b<<"="<<a%b<<endl;
        break;
        case '/': cout<<a<<"/"<<b<<"="<<a/b<<endl;
        break;
    }
}
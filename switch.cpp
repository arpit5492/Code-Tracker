#include<iostream>
using namespace std;
int main(){
    int num=2;
    switch(num){
        case 1: cout<<"First number"<<endl;
        break;
        case 2: cout<<"Second number"<<endl;
        // break;
        default: cout<<"This is a default case"<<endl;
        break;
    }
}
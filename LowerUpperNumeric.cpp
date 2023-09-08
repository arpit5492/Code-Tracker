#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character: ";
    cin>>ch;
    if(ch>96 && ch<123){
        cout<<"The character is lowercase"<<endl;
    }
    else if(ch>64 && ch<91){
        cout<<"The character is uppercase"<<endl;
    }
    else if(ch>47 && ch<58){
        cout<<"The character is numeric"<<endl;
    }
    else{
        cout<<"Invalid"<<endl;
    }
    return 0;
    

}
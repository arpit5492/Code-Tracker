#include<iostream>
using namespace std;
int main(){
    float fah, cel;
    cin>>fah;
    cel = (fah - 32)* (5.0/9);
    cout<<"Temperature in celcius: "<<cel<<endl;
    return 0;
}
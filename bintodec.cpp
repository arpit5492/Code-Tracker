#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the binary: ";
    cin>>n;
    int m=n;
    int ans=0;
    int i=0;
    while(m!=0){
        int digits=m%10;
        if(digits==1){
            ans+=pow(2,i);
        }
        m=m/10;
        i++;
    }
    cout<<n<<" in decimal: "<<ans<<endl;
}
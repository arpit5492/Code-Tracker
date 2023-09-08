#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number which you want to convert to binary: ";
    cin>>n;
    int m=n;
    int ans=0;
    int i=0;
    while(m!=0){
        int bits=(m&1);
        ans=(bits*pow(10,i)+ans); //Formula for reversing an integer
        m=m>>1;
        i++;
    }
    cout<<n<<" in binary: "<<ans<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    // long long int n;
    // cout<<"Enter the number: ";
    // cin>>n;
    // long long int i=1;
    // long long int sum = 0;
    // while(i<=n){
    //     cout<<i<<" ";
    //     sum+=i;
    //     i+=1;
    // }
    // cout<<endl;
    // cout<<"Sum of the numbers: "<<sum<<endl;
    long long int n;
    cout<<"Enter the number: ";
    cin>>n;
    long long int i=0;
    long long sum;
    int arr[n];
    cout<<"The list of numbers are: ";
    while(i<n){
        arr[i]=i+1;
        cout<<arr[i]<<" ";
        i+=1;
    }
    cout<<endl;
    float div = (n/2);
    sum = div * (arr[0]+arr[n-1]);
    cout<<"Sum: "<<sum;
    return 0;
}
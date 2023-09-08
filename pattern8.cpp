#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int cnt=row;
        int col=1;
        while(col<=row){
            cout<<cnt<<" ";
            cnt+=1;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
}
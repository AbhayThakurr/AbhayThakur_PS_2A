#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n \n";
    cin>>n;
    for(int i=1; i<=n ;i++){
        int k = n;
        for(int j=n; j>=0;j--){

        cout<<k<<" ";
        k=k-5;
        }
    int j;
    for(;j<=n;j++){
        cout<<j<<" ";
        j=j+5;
    }
     }
    return 0;

}
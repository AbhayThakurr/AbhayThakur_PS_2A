#include<iostream>
using namespace std;
int main(){
    int n,i,k,sum=0;
    cout<<"Enter the value of n \n";
    cin>>n;
    for(i=1;i<=n;i++){
    k=i;
          int term = k*(k+1)*(k+2);
          sum = sum + term;
    }
    cout<<"Sum of the series is \n"<<sum;
    return 0;

}
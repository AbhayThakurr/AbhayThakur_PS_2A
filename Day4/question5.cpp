#include<iostream>
using namespace std;

void primeNumber(int n){
    int i, j,  count ;

    for(i=1;i<=n;i++){
        count =0;
        for(j=1;j<=i;j++){
        if (i%j==0){
            count++;
        }
     
        }
     
    if(count==2){
        cout<<i<<" ";
    }

   
    }
}
int main(){
    int n;
    cout<<"Enter the number upto which you want to calculate the prime numbers \n";
    cin>>n;
    cout<<"Prime numbers are \n";

    primeNumber(n);
}
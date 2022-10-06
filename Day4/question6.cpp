#include<iostream>
#include<Climits>
#include<math.h>
using namespace std;
void armstrong(int n){
  
    int m=n;
   int result=0,a; 
    while(n>0){
    int a=n%10;
    int result=result + pow(a,3);
     n=n/10;
    }
    if(result==n){
        cout<<"Armstrong"; 

    }
else {
    cout<<"Not Armstrong";
}
}

int main(){
    int n;
  cout<<"Enter the value of n \n";
  cin>>n;
   
 armstrong(n);
}
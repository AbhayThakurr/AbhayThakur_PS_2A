#include<iostream>
#include<Climits>
using namespace std;
void palindrome(int n){
  
    int m=n;
   int rev=0,a; 
    while(n>0){
    int a=n%10;
    int rev=rev*10+a;
     n=n/10;
    }
    if(m==n){
        cout<<"Palindrome"; 

    }
else {
    cout<<"Not palindrome";
}
}

int main(){
    int n;
  cout<<"Enter the value of n \n";
  cin>>n;
   
 palindrome(n);
}
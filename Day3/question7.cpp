#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    int count =1;
    float fact,sum=0;
    
    cout<<"Enter the value of n \n";
    cin>>n;
    for(int i= 1; i<=n;i++){

            fact=fact*i;
        
        if(i%2==0){
          float  term=0 ;
        }
        else{
            
          float  term= count/fact;
          sum = sum + term;
        count++;
        }

    }
    cout<<"The sum of the series is \n";
    cout<<sum;
    return 0;
}
#include<iostream>
#include<math.h>

using namespace std;
int main(){
    float n,x,fact=1,sum=1;
    cout<<"Enter the value of x \n";
    cin>>x;
    cout<<"Enter the value of n \n";
    cin>>n;
    for(float i=1;i<=n;i++){
        // for(float j= 1;j<=n;j++){
            fact=fact*i;
           float term= pow(x,i)/fact;
          sum = sum + term;

        // }
    }
    cout<<"Sum of the series is \n"<<sum;
    return 0;
}
#include<iostream>
#include<math.h>

using namespace std;
int main(){
    float n,x,fact=1,sum=0;
    int i, m=-1;
    cout<<"Enter the value of x \n";
    cin>>x;
    cout<<"Enter the value of n \n";
    cin>>n;
    for(i=1;i<=n;i++){
        // for(float j= 1;j<=n;j++){
            fact=fact*i;
            if(i%2==0){
                float term = 0;
            }
            else{
           float term= pow(x,i)/fact;
              float value = term*m ;
           sum = sum + value;
           m=m*-1;
            }

        // }
    }
    cout<<"Sum of the series is \n"<<sum;
    return 0;
}
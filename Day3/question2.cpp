#include<iostream>
using namespace std;
int main(){
    int n;
    int fact=1;
    int sum=0;
    cout<<"Enter a no. to generate series \n";
    cin>>n;

    for(int i=1;i<=n;i++){
        fact = fact*i;
         sum = sum + (fact/i);
    }
    cout<<"Sum of the series is "<<sum;

    return 0;
}
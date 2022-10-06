#include<iostream>
using namespace std;
int main(){
    int y;
    cout<<"Enter a year to check \n";
    cin>>y;
    if(y%4==0 && y%100==0){
        cout<<y<<" is a leap year";
    }
    else{
        cout<<y<<" is not a leap year";
    }
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter the temperature in centigrade to check weather \n";
    cin>>t;
    if(t<0){
     cout<<"Freazing weather";
    }
    else if(t>=0&&t<10){
     cout<<"Very cold weather";
    }
    else if(t>=10&&t<20){
     cout<<"Cold weather";
    }
    else if(t>=20&&t<30){
     cout<<"Normal in temperature";
    }
    else if(t>=30&&t<40){
     cout<<"Hot";
    }
    else if(t<=40){
     cout<<"Very hot";
    }
   return 0;
}
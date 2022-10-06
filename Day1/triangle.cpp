#include<iostream>
using namespace std;
int main(){
    int l1,l2,l3;
    cout<<"Enter the lengths of three side of triangle \n";
    cin>>l1>>l2>>l3;
    if(l1==l2 && l1==l3){
        cout<<"It is a equilateral triangle";
    }
    else if(l1==l2 && l1!=l3){
        cout<<"It is a isosceles triangle";
    }
    else{
        cout<<"It is a scalene triangle";
    }
    return 0;
}
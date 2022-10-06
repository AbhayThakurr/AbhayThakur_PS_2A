#include<iostream>
using namespace std;
int main(){
    int b_s;
    char g;
    float allow, pf, hra ,da;
    cout<<"Enter the basic salary \n";
    cin>>b_s;
    cout<<"Enter the grade \n";
    cin>>g;
    hra=0.2*b_s;
     da =0.5*b_s;
    if (g='a'){
     allow = 1700;
    }
    else if (g='b'){
         allow = 1500;
    }
    else if (g='c'){
        allow = 1300;
    }
    else{
        pf = 0.11* b_s;
    }

    float total_salary = hra + da +b_s + allow -pf;

    cout<<"Total salary is "<<total_salary;

    return 0;

    
}
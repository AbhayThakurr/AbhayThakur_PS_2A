#include<iostream>
using namespace std;
int main(){
      int K;
    int M;
    int D;
    int C;
    int F;
    int r;
    int year;
    int month;
    cout<<"Enter the date \n";
    cin>>K ;
    cout<<"Enter the month no. \n";
  
    cin>>month ;
    cout<<"Enter the year \n";
    cin>>year ;
   //  cout<<"Enter the First two digit of the year \n";
   //  cin>>C ;
   //  cout<<"Enter the Last two digit of the year \n";
   //  cin>>D ;
   C=year/100;
   D=year%100;
   M=month-2;
   int j =(13*M-1)/5;
   int p = D/4;
   int q= C/4;

     F = K+j +D+(D/4) +(C/4) - 2*C ;

     if(F>0){
      r = F % 7;
     }

     else if(F<0){
         r =F % 7;
       r= r +7;
     }

   //   cout<<r<<endl;

     if (r==1){
        cout<<"Monday";
     }
     else if (r==2){
        cout<<"Tuesday";
     }
    else if (r==3){
        cout<<"Wednesday";
     }
     else if (r==4){
        cout<<"Thursday";
     }
     else if (r==5){
        cout<<"Friday";
     }
     else if (r==6){
        cout<<"Saturday";
     }
     else if (r==0){
        cout<<"Sunday";
     }
    return 0;
}
 

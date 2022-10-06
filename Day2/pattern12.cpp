#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    for(int i= n ; i>=1 ; i--){
    //     int j;
    //    int k= j;
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        
    
    
        for (int j=1; j<=2*(n-i); j++){
            cout<<"  ";
        }
        int m=i;
        for(int j=1;j<=i; j++){
            cout<<m<<" ";
            m=m-1;
        }
        cout<<endl;
    }
   
    return 0;
}
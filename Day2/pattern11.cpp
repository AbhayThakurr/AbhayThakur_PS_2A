#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
  int i=1;
    for(int i= 1; i<=n ; i++){
        for (int j = 1; j <=i ; j++)
        {
            cout<<j;
        }
        for(int j= 1 ; j<=2*n-2*i;j++){
            cout<<" ";
        }
        int j;
        // int k= 1;
        for (int j=i; j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=1;
    for(int i=1; i<=n;i++){
        for (int j =1 ; j <=i ; j++)
        {
         count=i+j-1;
            cout<<count;
        }
            count=i+1;
        cout<<endl;
        
    }
    return 0;
}
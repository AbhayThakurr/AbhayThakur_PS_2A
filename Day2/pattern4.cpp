#include<iostream>
using namespace std;
int main(){
    char n;
    char c='A';
    cin>>n;
    for (char i='A';i<=n;i++){
        for (char j='A';j<=i;j++){
            cout<<c++;
            
        }
        c=i+1;
        cout<<endl;
    }
    return 0;
}
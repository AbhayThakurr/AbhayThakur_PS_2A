#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i =1;i<=n;i++){
        int s=i-1;
        int c=1;
        for(int j= 1;j<=2*i-1;j++){
            if (j<=i){
                cout<<c;
                c=c+1;
            }
            else if(j>i){
                cout<<s;
                s=s-1;
            }
        }
        cout<<endl;
    }
    return 0;
}
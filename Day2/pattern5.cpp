#include<iostream>
using namespace std;
int main (){
    char c;
    cin>>c;
   int i, j;
	for (i=c;i>='A';i--) {
		for (j=i;j<=c;j++) {
			cout<<char(j);
		}
        cout<<endl;
    }
    return 0;
}
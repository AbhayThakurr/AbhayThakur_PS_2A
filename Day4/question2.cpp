#include<iostream>
using namespace std;
void mean_median(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
      int sum=0,mean;
      for(int i=0;i<n;i++){
        sum=sum +arr[i];
        mean=sum/n;
    }
    cout<<"Mean is "<<mean;
    cout<<endl;

     int first,second,median;
    if(n%2 == 0) {
        first = arr[(n/2) - 1];
        second = arr[n/2];
        median = (first+second)/2;
    cout<<"Median is "<<median;
    }
     if(n%2 != 0) {
        median = arr[(n-1)/2];
         cout<<"Median is "<<median;
    }

}
int main(){
    int n;
    int arr[100];
    cout<<"Enter the value of n \n";
    cin>>n;
    cout<<"Enter the element of array \n";
    mean_median( arr,n);
}
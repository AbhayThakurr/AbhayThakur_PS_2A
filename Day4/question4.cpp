#include <iostream>
using namespace std;

int perfect(int n)
{
    int i, sum;
 
   
    sum = 0;
    for(i=1; i<n; i++)
    {
        if(n % i == 0)
        {
            sum = sum+i;
        }
    }
 
   
    if(sum == n)
        return 1;
    else
        return 0;
} 

void printPerfect(int fNumber, int lNumber)
{
    
    while(fNumber <= lNumber)
    {
        if(perfect(fNumber))
        {
           cout<<fNumber<<endl;
        }
 
        fNumber++;
    }
}
 
 
 
int main()
{
    int fNumber, lNumber;
 
    
    cout<<"Enter lower limit to print perfect numbers \n";
    cin>>fNumber;
    cout<<"Enter upper limit to print perfect numbers \n";
    cin>>lNumber;
 
   cout<<"All perfect nbers between "<<fNumber<< " to "<<lNumber <<" are: "<<endl;
    printPerfect(fNumber, lNumber);
 
    return 0;
}
 

 


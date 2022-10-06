#include<iostream>

using namespace std;
int main() 
{   
  
     int i,j,temp=0;
     string word;
     cin>>word;
     temp=word.length();
     for(i=0;i<temp;i++)
     {
         for(j=0;j<i;j++)
             cout<<".";
         for(j=i;j<temp;j++)
             cout<<word[j];
          cout<<endl;
 }
    
 return 0;
}
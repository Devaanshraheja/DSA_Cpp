#include <iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  for (int i = 0; i < n; i++)
  {
    if(i==0){
      // spce
      for (int j = 0; j< n-1; j++)
      {
        cout<<" ";
      }
      // star
      for (int j = 0; j < n; j++)
      {
        cout<<"*";
      }
      cout<<endl;

      
    }
    if(i==n-1){
      // star
      for (int j = 0; j < n; j++)
      {
        cout<<"*";
      }
      // spce
      for (int j = 0; j< n-1; j++)
      {
        cout<<" ";
      }
      cout<<endl;
      


    }
    else{
      for (int j = 0; j < n-1-i; j++)
      {
        cout<<" ";
      }
      
      cout<<"*";
      for (int j = 0; j < n-2; j++)
      {
        cout<<" ";
      }
      cout<<"*";
      // lasr space in mid rows
      for (int j = 0; j < i; j++)
      {
        cout<<" ";
      }
      
      

      cout<<endl;
    }
    
  }
  
}
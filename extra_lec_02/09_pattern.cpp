#include<iostream>
using namespace stdint main(){
  int n;
  cin>>n;

  for (int  i = 0; i < n; i++)
  {
    for (int j = 0; j< n; j++)
    {
      if(i==0||i==n-1) {cout<<"* ";}
      else {
        if(j==0||j==n-1) {cout<<"* ";}
        else {cout<< "  ";}
      }
    }
    cout<<endl;
    
  }
  return 0;
}
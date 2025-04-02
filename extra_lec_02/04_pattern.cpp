// ****
//  ***
//   **
//    *
// #include <iostream>
// using namespace std;
// int main(){
//   int n;
//   cin >> n; 
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j < i ; j++)
//     {
//       cout<<" ";
//     }
//     for (int j = n; j > i; j--)// for(intj=0; j<n-i;j++){}
//     {
//       cout<<"*";
//     }
    
//     cout<<endl;
//   }
  
// }
#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i; j++)
    {
      cout<<" ";
    }
    for (int j = 0; j < n-i; j++)
    {
      cout<<"*";
    }
    cout<<endl;
    
    
  }
  

}
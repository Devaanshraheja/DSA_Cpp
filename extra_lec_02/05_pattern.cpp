// 1 _ _ _
// 2 3
// 4 5 6
// 7 8 9 10
#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int x=1;
  for (int i = 0; i < n; i++)
  {
   for (int j = 1; j < i+2; j++)
   {
    cout<<x<<" ";
    x++;
   }
   for (int j = 0; j < n-1-i; j++)
   {
    cout<<" ";
   }
   cout<<endl;
   
   
  }
  
// }
// #include <iostream>
// using namespace std;
// int main(){
//   int n;
//   int x =1;
//   cin >>n;
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j < i+1; j++)
//     {
//       cout<< x<<" " ;
//       x++;
//     }
//     for (int j = 0; j < n-i-1; j++)
//     {
//       cout<<" ";
//     }
    
//     cout<<endl;
//   }
  



// }
// #include <iostream>
//  using namespace std;
//  int main(){
//   int n;
//   cin>>n;

//   int arr[n][n];

 

//   for(int i = 0;i<n;i++){
    
//     for(int j = 0;j<i+1;j++){
//       cout<<j+1<<" ";
//     }
//     cout<<endl;
  
//   }
//   return 0;

//  }
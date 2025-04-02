// #include<iostream>
// using namespace std;
// int  main(){
//   int a[]={2,3,4,5,7,2};
//   int n=sizeof(a)/sizeof(a[0]);

//   for (int i = 0; i <= n-2; i++)
//   {
//     for (int  j = 0; j < n-1-i; j++)
//     {
//       if(a[j]>a[j+1]){
//         swap(a[j],a[j+1]);
//       }
//     }
    
    
//   }
//     for (int i = 0; i < n; i++)
//     {
//       cout<<a[i]<<" ";
//     }
  
//   return 0;
// }
#include<iostream>
using  namespace std;
int main(){
  int a[]={8,7,6,64,54,34,5,6,3};
  int n=sizeof(a)/sizeof(int);
  for (int i = 0; i < n-1; i++)//kitni baari mein array sort hoga n-1 times swap krna padega
  {
    for(int j=0;j<=n-2-i;j++){//j means ek ek elemts ko kitni baar swap krna hai
      if(a[j]>a[j+1]) swap(a[j],a[j+1]);
    }
  }
  for (int i = 0; i < n; i++)
  {
    cout<<a[i]<<" ";
  }
  
  return 0;

  

}
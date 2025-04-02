#include<iostream>
using namespace std;
void solve_01(int*a, int n,int i, int j){
  if(i==n-1) return;
  if(j==n-1-i) solve_01(a, n,i+1,0)
  else{
    if(a[j]> a[j+1]){
      swap(a[j],a[j+1]);
    }
    
  }

}

// void bubble_sort(int* a, int n, int i ){
//   // base  case
//   if(i==n-1) return;
//   // recursive case
//   // pehle number ko sahi jagah par rakhdo for j=0, baaki ka kaam recursion dekhlenge 
//   for (int j = 0; j < n-1-i; j++)
//   {
//     if(a[j]> a[j+1]){
//       swap(a[j],a[j+1]);
//     }
//   }
//   bubble_sort(a,n,i+1);// pure assumption
  
// }
// int  main(){
//   int a[]={2,3,4,5,7,2};
//   int n=sizeof(a)/sizeof(a[0]);
//   int i=0;
//   bubble_sort(a,n,i);
//   for (int i = 0; i < n; i++)
//     {
//       cout<<a[i]<<" ";
//     }

  
//   return 0;
// };
void bubble_sort(int*a,int n,int i){
  if(i==n-1) return;
  for (int j = 0; j < n-2-i; j++)
  {
    if(a[j]>a[j+1]) swap(a[j],a[j+1]);
  }
  bubble_sort(a,n,i+1);
  
}
int main(){
  int a[]={7,5,4,3,4,6,1};
  int n=sizeof(a)/sizeof(int);
  int i = 0;
  for (int i = 0; i < n; i++)
  {
    /* 
  }
  
  return 0;
}
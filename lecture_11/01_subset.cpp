// ip=[1 2 2 3 ]
// Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
#include <iostream>
using namespace std;
void sub(int* a,  int i  , int* b ){

  if(i==a.size) return;// base case 
  for (int j=i; j < a.size; j++)
  {
    if(j!=i &&a[j]==a[j-1]) continue;
    b
  }
  

}
int main(){
int a[]={1,2,2,3}
int n=sizeof(a)/sizeof(a[0]);
int b[100];



  return 0;
}
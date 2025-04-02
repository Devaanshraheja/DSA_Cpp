#include<iostream>
using namespace std;
int binary_search(int*a, int s, int e, int key){
  // base case
  if(s>e) return -1;

  int mid=(s+e)/2;
  if(a[mid]==key) return mid;
  else if(key>a[mid]){
    int indx=binary_search(a,mid+1, e,key);
    return indx;

  }
  else{
    return binary_search(a,s,mid-1,key);
  }

}
int main(){
  int a[]={2,3,4,5,7,2};
  int n=sizeof(a)/sizeof(a[0]);
  int s=0;
  int e=n-1;
  int key=5;
  cout<< binary_search(a,s,e,key)<<endl;
  

  


  return 0;
}
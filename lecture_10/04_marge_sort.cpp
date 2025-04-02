#include<iostream>
using namespace std;
void merge_arrays(int* a , int* b, int* c, int s, int e){
  int mid=(s+e)/2;
  int i =s, j=s,k=mid+1;
  while(j<=mid and k<=e){
    if(b[j]<c[k]) a[i++]=b[j++];
    else a[i++]=c[k++];
  }
  while (j<=mid) a[i++]=b[j++];
  while(k<=e) a[i++]=c[k++;]
  

}
int  merge_sort(int* a,int* b, int* c, int n,){

  if(s==e) return ;// base case
  // recursive case
  int  b[100005], c[100005];
  int mid=(s+e)/2;
  for (int i = s; i <=mid; i++)
  {
    b[i]=a[i];
  
  }
  for (int i = mid+1; i <=e; i++)
  {
    c[i]=a[i];
  }
  // sort the arrays

  merge_sort(b,s,mid);
  merge_sort(c,mid+1,e);
  merge_arrays(a,b,c,s,e);
  
  




}

int main(){
  inta[]={9,9,8,7,6,5,4,3};
  int n=sizeof(a)/sizeof(int);

}

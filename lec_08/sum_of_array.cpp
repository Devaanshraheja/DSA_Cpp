#include<iostream>
using namespace std;
int sum_of_array(int* arr,int n){
  if(n==0)return 0;
  return arr[0]+sum_of_array((arr+1),n-1);
}

int main(){
  int arr[]={1,2,3,4,5};
  int n=sizeof(arr)/sizeof(arr[0]);
  cout<<"The sum of the given array is "<<sum_of_array(arr,n)<<endl;
}
/* 

#include<iostream>
using namespace std;
int sum_of_array(int arr[],int n){
  if(n==0)return 0;
  return arr[0]+sum_of_array(arr+1,n-1);



}
int main(){
  int arr[]={1,2,3,4,5};
  int n;
  cin>>n;
  // int arr[n];
  // for (int i = 0; i < n; i++)
  // {
  //   cin>>arr[i];
  // }
  cout<<sum_of_array(arr,n)<<endl;



  return 0;

}
*/
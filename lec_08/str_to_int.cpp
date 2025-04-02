#include<iostream>
#include<cstring>
using namespace std;
int string_to_int(char arr[], int n){
  if(n==0)return 0;
  return arr[n-1]-'0'+string_to_int(arr,n-1)*10;
}
int main(){
  char arr[]="12345";
  int n=strlen(arr);
  cout<<string_to_int(arr,n)<<endl;

}
/*
#include<iostream>
#include<cstring>
using namespace std;
int int_string(char* arr, int n){
  if(n==0)return 0;
  return arr[n-1]-'0'+int_string(arr,n-1)*10;




}
int main(){
  char arr[100]="12345";
  
  int n= strlen(arr);
  int x=int_string(arr,n);
  cout<<x+1<< endl;// just to remark that conversion is done

  return 0;
}






 */
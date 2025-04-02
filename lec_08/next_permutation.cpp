#include<iostream>
#include<cstring>
using namespace std;


void reverse(char a[], int i , int j){
  while (i<j)
  {
    swap(a[i],a[j]);
    i++;
    j--;
  }

}

int findindex(char a[]){
  int len_a=strlen(a);
  int i=len_a-2;
  int k=-1;


  while(i>=0){
    if(a[i]<a[i+1]){
      k=i;
      break;

    }
      i--;
  }
    return k;
}
int main(){
  char a[100];
  cin>>a;

  int len_a=strlen(a);
  int i=len_a-2;
  int k=findindex(a);
  if (k==-1){
    reverse(a,0,strlen(a)-1);
    cout<<a<<endl;
  }
  else{

  int j=strlen(a)-1;
  char x;
  
  while(j>k){
    if(a[j]>a[k]){
      swap(a[j],a[k]);
      break;
    }
    j--;
  }
  reverse(a,k+1,len_a-1);
  cout<<a<<endl;
  }


}
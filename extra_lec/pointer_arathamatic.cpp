#include<iostream>
using namespace std;
int main(){
  int x=1;
  int* iptr=&x;
  cout<<iptr<<endl;
  // iptr++;// it gives the differnce of 8 because it is hexadecimal(0123456789abcdef) ,so it depends on the datttype
  // cout<<iptr<<endl;
  int* jptr=iptr+1;
  cout<<jptr<<endl;
  cout<<jptr-iptr<<endl;


  return 0;
}
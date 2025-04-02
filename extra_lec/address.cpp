#include<iostream>
using namespace std;

int main(){
  int x=12;
  // cout<<&x<<"\n";
  // cout<<sizeof(&x)<<"\n";
  // cout<<sizeof(x)<<"\n";
  char c='j';
  char* cptr=&c;
  int * iptr= (int*)&c;
  cout<<*cptr<<endl<<iptr<<endl<<cptr<<endl;


  return 0;
}
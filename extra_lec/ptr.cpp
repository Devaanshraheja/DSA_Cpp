#include<iostream>
using namespace std;
 int main(){
  char c='x';
  int* iptr=(int*)&c;// explicitly typecasting the the adress of c into integer which is a char 
  cout<<(char)*iptr<<endl;//* gives you the dreferenced value of the of the pointer gives you the original value stored at the char c
    
  return 0;
 }
#include<iostream>
using namespace std;
int product(int a, int b ){
  // base case
  if(b==0) return 0;
  // recursive relation
  return a+product(a,b-1);// int a+ function(int a, or b mein se 1 minus krte jaayenge)


}
int main(){
  cout<<product(5,3);


  return 0;
}
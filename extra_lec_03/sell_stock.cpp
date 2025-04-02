#include <iostream>
#include <climits> 
using namespace std;

int main(){
  int price[]={7,1,5,3,6,4};
  int n=sizeof(price)/sizeof(int);
  int min_price=INT_MAX;
  int max_profit=INT_MIN;
  for (int i = 0; i < n; i++)
  {
    min_price=min(min_price,price[i]);
    max_profit=max(max_profit,price[i]-min_price);
  }
  cout<<"The maximum profit would be "<<max_profit;
  return 0;
  
}
#include<iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  int a[100005];
  for (int i = 0; i < n; i++)
  {
    cin>> a[i];
  }
  

 
int ones=0,zeroes=0,twos=0;
for (int i = 0; i < n; i++)
{
  if(a[i]==0)zeroes++;
  else if(a[i]==1)ones++;
  else twos++;
}
for (int i = 0; i < zeroes; i++)
{
  cout<<0;
}
for (int i = 0; i < ones; i++)
{
  cout<<1;
}
for (int i = 0; i < twos; i++)
{
  cout<<2;
}
return 0;
}





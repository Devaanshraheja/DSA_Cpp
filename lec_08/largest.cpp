#include<iostream>
using namespace std;
int main (){

  int n;
  cin>>n;
  cin.get();
  char a [100];
  char longest[100];
  int max_length=0;
  for (int i = 0; i < n; i++)
  {
    cin.getline(a,100);
    // cout<<"you enetered"<<i<<":"<<a<<endl;

  int len_a=strlen(a);

    if(len_a>max_length){
      max_length=len_a;
      strcpy(longest,a);
    }




  }

  cout<<"the largest string is:"<<longest<<"with length:"<<max_length<<endl;
  


  return 0;
}
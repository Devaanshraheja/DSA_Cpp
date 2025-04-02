#include<iostream>
using namespace std;
void concatination(char a [],char b[]){
  int i=strlen(a);
  int j=0;
  int len_b=strlen(b);
  while(j<=len_b){
    a[i++]=b[j++];

  }




}
int main(){
  char a [100]="Coding";
  char b[]="blocks";
  concatination(a,b);//user defined

  strcat(a,b);//inbuilt
  cout<<a<<endl;


  return 0;
}
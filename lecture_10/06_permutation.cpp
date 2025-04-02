#include<iostream>
using namespace std;
void permutations(char* g,int i){
  // base casee
  if(g[i]=='\0'){
    cout<<g<<endl;
    return;
  }

  //  recursive relation
  int freq[25]={0};
  for (int j = i; g[j] !='\0'; j++)
  {
    if(freq[g[j]+10]!=0)continue;
    freq[g[j]+10]=1;
    swap(g[i], g[j]);
    permutations(g,i+1);
    swap(g[j],g[i]);//backtracking

  }
  

  


}
int main(){
  char g[]={'1','2','3','\0'};
  permutations(g,0);
  


  return 0;
}
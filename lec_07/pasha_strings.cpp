#include<iostream>
using namespace std;
int main(){
  string s;
  cin >>s;
  int cnt[100005]={0};
  int len=s.size();
  int m;
  cin>>m;
  for (int  i = 0; i < m; i++)
  {
    int ai;cin>>ai;
    cnt[ai-1]++;

  }
  for (int i = 0; i < len/2; i++)
  {
    cnt[i]+=cnt[i-1];

  }
  for (int i = 0; i < len/2; i++)
  {
    if(cnt[i]%2){
      swap(s[i],s[len-1-1]);

    }
  }
  cout<<s<<endl;
  
  
  





  return 0;
}

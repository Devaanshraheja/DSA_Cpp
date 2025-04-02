//[1,7,4,2,7,7,3]
//first seven=index 1   last seven= index 5   all seven=[index ]
#include<iostream>
using namespace std;
int first_seven(int* a,int n){
  if(n==0) return -1;
  if(a[0]==7) return 0;
  else{
    int indx=first_seven(a+1,n-1);
    if(indx==-1) return -1;
     else return indx + 1;
  }
  return first_seven(a+1,n-1);

}
int last_seven(int a[],int n){
  // base case
  if(n==0) return -1;
  // recursive case 
  if(a[n-1]==7) return n-1;
  else{
    // int indx=last_seven(a,n-1);
    // return indx;
    return last_seven(a,n-1);
  }


}
void all_seven(int* a, int n,int i){
  // base case
  if(i>=n) return ;
  // recursive case 
  if(a[i]==7) cout<<i<<"  ";
  all_seven(a,n,i+1);


 }
int main(){
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r", stdin);
  freopen("output.txt","w", stdout);
  #endif
  int n;
  cin>>n;
  int a[n];
  int i=0;
  for (int i = 0; i < n; i++)
  {
    cin>>a[i];
  }
  cout<< "The first seven is found at index: "<<first_seven(a,n)<<endl;
  cout<<"The last seven is found at index : "<<last_seven(a,n)<<endl;
  cout<<"All seven in the index are found at indexes: ";
  all_seven(a,n,i);
}
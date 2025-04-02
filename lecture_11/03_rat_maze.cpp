#include<iostream>
using namespace std;
bool rat_in_maze(char maze[][5, int i ,int j, int sol[][100],int n, int m]){
  // base case
  if(i==n-1 and j==m-1){
    sol[i][j]=1;//
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        cout<<sol[i][j]<<" ";

      }
      cout<<endl;
      
    }
    return true;
    
  }
  // recursive case
  sol[i][j]=1;


  //  check right jka skte ya nhi
  if(j+1<m && maze[i][j+1]!='x'){
    bool kyarightjaaskte= rat_in_maze(maze,i, j+1,sol,n,m);
    if(kyarightjaaskte) return true;
  }
  //  check down jaaa  skte ya nhi
  if(i+1<n && maze[i+1][j]!='x'){
    bool kyadownjaskte=rat_in_maze(maze,i+1,j,sol,n,m)
    if(kyadownjaskte) return true;
  }
  // if right down dono nhi jaa skte
  sol[i][j]==1;


  // check up jaa skte ya nhi
  if(i-1>=0 and maze[i-1][j]!="x"&& sol[i-1][j]==0){
    bool kyauparjaskte=rat_in_maze(maze,i-1,j,sol,n,m);
    if (kyauparjaskte) return true;
  }
  // check niche ja skte ya nhi
  if(j-1>=0 and maze)





}
int main(){
  char maze[][5]=
  { "0x000",
    "0x0x0"
    "0x0x0"
    "000x0"


  

  };
  int sol[100][100]={0};
  ratinmaze(maze,0,0,sol,4,5)
  return 0;
}
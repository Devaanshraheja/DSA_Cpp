 #include<iostream>
 using namespace std;

 int main(){
  int c=10;
  int* ptr=&c;
  cout<<*ptr<<endl;
  int** iptr=&ptr;// for assigning a value to a pointer to the pointer
  return 0;
}
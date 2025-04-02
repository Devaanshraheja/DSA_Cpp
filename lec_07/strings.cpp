#include<iostream>
using namespace std;
int main(){
char name[1000];
// cin>>name
// cin.getline(array_name,buckets,delimeter)

cin.getline(name,100,".");
cout<<name<<endl;
return 0;
}
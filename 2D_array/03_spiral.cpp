#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of the square matrix: ";
    cin >> n;
    
    int arr[100][100];  

    cout << "Enter the matrix elements:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }


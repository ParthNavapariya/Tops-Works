// Write a C++ program to check if a given string is a palindrome (reads the same
// forwards and backwards).
// o Objective: Practice string operations

#include <iostream>
using namespace std;

int main() {
    int A[2][2], B[2][2], sum[2][2];

    // First matrix input
    cout << "First matrix na elements enter karo:\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cin >> A[i][j];
        }
    }

    // Second matrix input
    cout << "Second matrix na elements enter karo:\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cin >> B[i][j];
        }
    }

    // Matrix addition
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    // Result display
    cout << "Addition matrix:\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
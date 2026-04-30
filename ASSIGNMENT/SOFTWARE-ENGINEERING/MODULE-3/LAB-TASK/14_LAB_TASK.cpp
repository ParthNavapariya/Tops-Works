// . Variable Scope
// o Write a program that demonstrates the difference between local and global
// variables in C++. Use functions to show scope.
// o Objective: Reinforce the concept of variable scope.

#include <iostream>
using namespace std;

// Global variable
int x = 10;

void showLocal() {
    int x = 20;  // Local variable (same name as global)
    cout << "Inside showLocal() - Local x = " << x << endl;
}

void showGlobal() {
    cout << "Inside showGlobal() - Global x = " << x << endl;
}

int main() {
    cout << "Inside main() - Global x = " << x << endl;

    showLocal();
    showGlobal();

    return 0;
}
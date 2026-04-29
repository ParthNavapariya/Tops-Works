// . Factorial Calculation Using Recursion
// o Write a C++ program that calculates the factorial of a number using recursion.
// o Objective: Understand recursion in functions.
#include <iostream>
using namespace std;

// Recursive function
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;  // Base case
    } else {
        return n * factorial(n - 1);  // Recursive call
    }
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial is not defined for negative numbers.";
    } else {
        cout << "Factorial of " << num << " is: " << factorial(num);
    }


}
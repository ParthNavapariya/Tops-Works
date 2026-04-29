// 2. Type Conversion
// o Write a C++ program that performs both implicit and explicit type conversions and
// prints the results.
// // o Objective: Practice type casting in C++.

#include<iostream>
using namespace std;

int main() {

    int a = 10;
    float b = a;   

    cout << "Implicit Conversion:" << endl;
    cout << "Integer a = " << a << endl;
    cout << "Converted to float b = " << b << endl;


    float x = 10.75;
    int y = (int)x;  

    cout << "\nExplicit Conversion:" << endl;
    cout << "Float x = " << x << endl;
    cout << "Converted to int y = " << y << endl;

}
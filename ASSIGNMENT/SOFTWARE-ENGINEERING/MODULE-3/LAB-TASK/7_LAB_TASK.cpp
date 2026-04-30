//  Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise
// operators. Perform operations using each type of operator and display the results.
// o Objective: Reinforce understanding of different types of operators in C++.

#include <iostream>
using namespace std;
int main()
{
    int num1, num2;

    cout << "enter your number" << endl;
    cin >> num1 >> num2;
    // AIRTHMATIC
    
    int add = num1 + num2;
    cout << "addition = " << add <<endl;
    int sub = num1 - num2;
    cout << "Substraction = " << sub<<endl;
    int mul = num1 * num2;
    cout << "multiplication = " << mul<<endl;
    int div = num1 / num2;
    cout << "division = " << div<<endl;
    int mod = num1 % num2;
    cout << "modulus = " << mod<<endl;

    // RELATIONAL OPERATOR
    int equal = num1 == num2;
    cout << "equal to " << equal << endl;
    int not_equal = num1 != num2;
    cout << "not equal to " << not_equal << endl;
    int greater = num1 > num2;
    cout << "greater than " << greater << endl;
    int less = num1 < num2;
    cout << "less than " << less << endl;
    int greater_equal = num1 >= num2;
    cout << "greater equak " << greater_equal << endl;
    int less_equal = num1 <= num2;
    cout << "less equal " << less_equal << endl;

    // LOGICAL OPERATOR;

    int ando = num1 > 0 && num2 > 0;
    cout << "and" << ando << endl;
    int orr = num1 > 0 || num2 > 0;
    cout << "or" << orr << endl;
    int logicalnot = !(num1 > num2);
    cout << "logical not " << logicalnot << endl;

    // BITWISE OPERATOR

    cout << "a & b = " << (num1 & num2) << endl;
    cout << "a | b = " << (num1 | num2) << endl;
    cout << "a ^ b = " << (num1 ^ num2) << endl;
    cout << "~a = " << (~num1) << endl;
    cout << "a << 1 = " << (num1 << 1) << endl;
    cout << "a >> 1 = " << (num1 >> 1) << endl;
}
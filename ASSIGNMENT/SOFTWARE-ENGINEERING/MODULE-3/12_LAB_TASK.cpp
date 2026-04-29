// Write a C++ program that defines functions for basic arithmetic operations (add,
// subtract, multiply, divide). The main function should call these based on user input.
// o Objective: Practice defining and using functions in C++

#include<iostream>
using namespace std;
int add(int a, int b){
    return a + b;
}
int sub(int a, int b){
    return a - b;
}
int mul(int a, int b){
    return a * b;
}
int divi(int a, int b){
    return a / b;
}
int main(){
        int num1 ,num2;
        char op;
        cout<<"enter number";
        cin>>num1;
        cout<<"enter operator";
        cin>>op;
        cout<<"enter number2";
        cin>> num2;

        switch(op){
            case '+':
            cout<<"result = " << add(num1 ,num2);
            break;
            case '-':
            cout<<"result =" << sub(num1,num2);
            break;
            case '*':
            cout<<"result =" <<mul(num1,num2);
            break;
            case '/':
            cout<<"result =" << divi(num1,num2);

        }        
}

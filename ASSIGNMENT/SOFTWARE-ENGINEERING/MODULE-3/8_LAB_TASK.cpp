// 1. Grade Calculator
// o Write a C++ program that takes a student’s marks as input and calculates the grade
// based on if-else conditions.
// o Objective: Practice conditionalstatements(if-else)

#include<iostream>
using namespace std;
int main(){
    int marks;
    cout << "enter yout marks" << endl;
    cin >> marks;
     if(marks > 100){
        cout << "enter your marks invalid";
     }
     else if(marks >= 90){
        cout << "A";
     }
     else if(marks >= 75){
        cout << "B";
     }
     else if (marks >= 59)
     {
        cout << "c";
     }
     else if (marks >= 55){
        cout << "D";

     }
     else {
         cout << "f";
     }
     
}
// o Write a C++ program to display the multiplication table of a given number using a for
// loop.
// o Objective: Practice using loops.

#include<iostream>
using namespace std;
int main(){

    int number,i;
    cout<< "enter yout number";
    cin >> number;
    
    for(i=0;i<10;i++){
        cout<< number<<"*"<< i << "=" << number*i<<endl;
    }
}   


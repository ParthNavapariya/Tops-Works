// Write a program that prints a right-angled triangle using stars (*) with a nested loop.
// o Objective: Learn nested control structures.

#include<iostream>
using namespace std;
int main(){
    int number,i,k;
    cout << "enter your number";
    cin>>number;
    for(i=0;i<=number;i++){
        for(k=0;k<=i;k++){
            cout<<("*");
        }
        cout<<endl;
    }
}

    
 

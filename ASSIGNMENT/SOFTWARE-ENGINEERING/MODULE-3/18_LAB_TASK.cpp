// Write a C++ program that defines a class Calculator with functions for addition,
// subtraction, multiplication, and division. Create objects to use these functions.
// o Objective: Introduce basic class structure.

#include<iostream>
using namespace std;
class calculator{
    public:
    //add
    int add(int num1,int num2){
        return num1 + num2;
    }
    //sub
    int sub(int num1,int num2){
        return num1 - num2;
    }
    //mul
    int mul(int num1,int num2){
        return num1 * num2;
    }
    float divi (int num1,int num2){
        return num1/num2;
    }

};
int main(){
    calculator calc;

    int x = 10 , y = 29;
    cout<<"Add"<<calc.add(x ,y)<<endl;
    cout<<"sub"<<calc.sub(x,y)<<endl;
    cout<<"mul"<<calc.mul(x,y)<<endl;
    cout<<"divi"<<calc.divi(x,y)<<endl;
}
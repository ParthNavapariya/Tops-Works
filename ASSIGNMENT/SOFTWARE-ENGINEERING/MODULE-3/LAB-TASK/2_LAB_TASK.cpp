// sic Input/Output
// o Write a C++ program that accepts user input for their name and age and then
// displays a personalized greeting.
// o Objective: Practice input/output operations using cin and cout


#include <iostream> 
using namespace std;

int main(){
    int age;
    string name;
    cout<<"enter your name"<<endl;
    cin>>name;
    cout<<"enter you age"<<endl;
    cin>>age;
    cout << name << age <<"\t" <<"welcome";
}
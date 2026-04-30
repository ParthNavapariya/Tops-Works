// Number Guessing Game
// o Write a C++ program that asks the user to guess a number between 1 and 100. The
// program should provide hints if the guess is too high or too low. Use loops to allow
// the user multiple attempts.
// o Objective: Understand while loops and conditional logic

#include<iostream>
using namespace std;
int main(){
        int number;
        int guess;

       
        
        cout<<"enter yout number guss";
        cin >> number;
               while (number != guess)
       {
        /* code */
        cout<<endl<< "enter yout guss \n"<<endl;
        cin >> guess;

        if(number > guess){
            cout<<"to high";
        }
        else if(number < guess){
            cout << "to Low";
        }
        else{
            cout << "right number guss";
        }
    }

}
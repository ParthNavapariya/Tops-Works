// o Write a C++ program that accepts an array of integers, calculates the sum and average, and displays the results. o Objective: Understand basic array manipulation. transalate in gujarati

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "enter number ";
    cin >> n;

    int arr[n];
    int sum = 0;

    //array input
    cout<<"number enter \n";
    for(int i=0;i<n;i++){
        cin >> arr[i];
        sum += arr[i];

    }

    //avarage calculate;
    float avarage = (float)sum/n;

    // output
    cout << "sum =" << sum << endl;
    cout << "avarage =" << avarage <<endl;
}
// Write a C++ program to perform matrix addition on two 2x2 matrices.
// o Objective: Practice multi-dimensional arrays

#include<iostream>
using namespace std;

int main(){
    int matirx[2][3];

    cout<<"enter number";
    for(int i=0; i<2;i++){
        for(int j = 0; j < 3; j++){
            cin >> matirx[i][j];
        }
    }
    // output

    cout<<"matrix\n";
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<matirx[i][j]<<" ";
        }
        cout<<endl;
    }



}
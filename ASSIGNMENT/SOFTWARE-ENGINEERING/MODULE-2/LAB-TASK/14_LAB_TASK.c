// Write a C program that defines a structure to store a student's details (name,
// roll number, and marks). Use an array of structures to store details of 3
// students and print them.


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Student
{
   char name[20];
   int rollno,marks; 
};

int main(){
    struct  Student s1[3];    
    strcpy(s1[0].name,"nayan");
    s1[0].rollno=1;
    s1[0].marks=50;
  
    strcpy(s1[1].name,"kashyap");
    s1[1].rollno=2;
    s1[1].marks=51;


    strcpy(s1[2].name,"moyen");
    s1[2].rollno=3;
    s1[2].marks=100;

    int i = 0;
    for(i=0;i<3;i++){
        printf("\n%s\n%d\n%d",s1[i].name,s1[i].rollno,s1[i].marks);
    }

    

}
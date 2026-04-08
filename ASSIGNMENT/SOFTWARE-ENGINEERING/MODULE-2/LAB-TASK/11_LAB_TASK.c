//  Write a C program to demonstrate pointer usage. Use a pointer to modify the
// value of a variable and print the result.
#include<stdio.h>
int main(){
    int a = 10;  // normal variable
    int *p;         // pointer variable;

    p = &a;  // pointer ma aa nu address store
    printf("before change: %d\n", a);
    *p= 50; // pointer thi value change karvi;
    printf("afater change %d\n", a);

}
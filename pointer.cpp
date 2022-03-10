#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    // Pointer to a variable
    int a = 10;

    // Use * only for initialisation and derefrencing
    int *p;

    // Address of a is stored in the pointer p
    p = &a;

    // Printing the value of a
    cout << a << endl;

    // Printing the value of p that's pointing to a
    printf("Address of a is: %d \n", p);

    // Printing the value of a using p
    printf("Derefrencing: %d \n", *p);

    return 0;
}
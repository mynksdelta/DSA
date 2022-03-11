#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    // Declaring and defining an array named A
    int A[3] = {2, 1, 5};

    // Creating a pointer variable p
    int *p;

    // Storing the address of A into p
    // A also denoted the starting addrss of the array so no need to use &
    p = A;

    // Using for loop to print all values of A using pointer p
    for(int i = 0; i < 3; i++)
    cout << p[i] << endl;
    
    return 0;
}
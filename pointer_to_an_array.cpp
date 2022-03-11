#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    // Declaring and defining an array named A
    int A[3] = {2, 1, 5};

    // Creating a pointer variable p
    int *p, *h;

    // Creating array in heap memory, type casting the array into int using malloc function
    h = (int *)malloc(5 * sizeof(int));

    // Defining the values of array in heap
    h[0] = 11;
    h[1] = 3;
    h[2] = 23;
    h[3] = 15;
    h[4] = 2;
    
    // Storing the address of A into p
    // A also denoted the starting addrss of the array so no need to use &
    p = A;

    // Using for loop to print all values of A using pointer p
    for(int i = 0; i < 3; i++)
    cout << p[i] << endl;

    // Printing the values of array stored in heap
    cout << "----------------" << endl;
    for(int j = 0; j < 5; j++)
    cout << h[j] << endl;

    return 0;
}
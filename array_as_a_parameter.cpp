#include<iostream>
#include<stdio.h>
using namespace std;

void fun(int a[], int n)
{
    // Array passed as a parameter uses passing by address
    // This means on modifiction, the value will change in the original array ie. A[]
    a[0] = 9;
    for(int i = 0; i < n; i++)
    cout << a[i] << endl;
}

// This function returns address of an array created inside a heap
int* createArrayInHeap(int size)
{
    // For storing the address of the array in pointer p
    int *p;

    // Creating the array
    p = new int[size];

    // Adding elements to the array created above
    for(int i = 0; i < size; i++)
    p[i] = i+1;

    // Returning the array pointer
    return p;
}

int main()
{
    // Created an array with three elements
    int A[] = {2, 1, 5};
    int *a, sz = 5;

    // Created an integer contains number of elements
    int n = 3;

    // Passing array as a parameter to the function fun()
    fun(A, n);

    // Calling function to create array inside heap and storing its address into pointer a
    a = createArrayInHeap(sz);

    // Printing all the elements of array using pointer
    for(int i = 0; i < sz; i++)
    cout << a[i] << endl;

    return 0;
}
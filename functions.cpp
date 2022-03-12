#include<iostream>
#include<stdio.h>
using namespace std;

// Swap function
void SWAP(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 3, b = 5;

    // Passing by address
    SWAP(&a, &b);

    cout << "a: " << a << endl << "b: " << b << endl;
    return 0;
}
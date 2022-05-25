#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int *P;
    int *A;
    // Declaring a dynamic array using c++ syntax
    P = new int[5];

    // Declaring a dynamic array using c syntax
    // Here (int *) is type casting to pointer
    A = (int *)malloc(5 * sizeof(int));

    // To free dynamically allocated array space
    // In c++
    delete []P;

    // In c
    free(A);
    return 0;
}
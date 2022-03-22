#include<iostream>
#include<stdio.h>
using namespace std;

// Creating a struct named rectangle
struct Rectangle {
    int length;
    int breadth;
};

// Function area that returns the area of struct
// For pass by value use 'r' and for pass by reference use '&r'
int area(struct Rectangle r)
{
    return r.length * r.breadth;
}

int main()
{
    // Defining the struct
    struct Rectangle r = {2, 5};
    printf("%d",  area(r));
    return 0;
}
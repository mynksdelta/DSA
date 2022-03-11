#include<iostream>
#include<stdio.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    /*
    In c++, we can just write Rectangle without struct 
    */
    // Creating an object or struct Rectangle named r
    struct Rectangle r = {1, 5};

    // Creating struct Rectangle pointer p and pointing it to r
    struct Rectangle *p = &r;

    // Printing length of r
    cout << r.length << endl;

    /* Printing length using pointer p using dot operator, need to use brackets
    to avoid operator precedence conflict */
    cout << (*p).length << endl;

    // To access pointer to a structure -> arrow is used
    cout << p->length << endl;


    // Creating struct dynamically
    struct Rectangle *d;
    d = (struct Rectangle*) malloc(sizeof(struct Rectangle));

    // Assigning the value of heap memory using pointer
    d->length = 5;

    // Printing the value of length
    cout << d->length << endl;

    return 0;
}
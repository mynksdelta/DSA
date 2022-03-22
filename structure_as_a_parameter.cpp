#include<iostream>
#include<stdio.h>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

int area(struct Rectangle r)
{
    return r.length * r.breadth;
}

int main()
{
    struct Rectangle r = {2, 5};
    printf("%d",  area(r));
    return 0;
}
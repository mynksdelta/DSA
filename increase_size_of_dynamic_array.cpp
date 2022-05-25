#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    // declaring two integer pointer variables
    int *p, *q;

    // Creating array and point p towards it
    p = (int *)malloc(5 * sizeof(int));
    // adding values 
    p[0] = 1; p[1] = 2; p[2] = 3; p[3] = 4; p[4] = 5;

    // Printing values in array p
    cout << "------ARRAY P---------" << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << p[i] << endl;
    }
    cout << "------------" << endl;
    
    // Creating array and point p towards it
    q = (int *)malloc(7 * sizeof(int));

    // Cloning the existing values of p in q
    for(int j = 0; j < 5; j++)
    {
        q[j] = p[j];
    }
    cout << "------ARRAY Q---------" << endl;

    // Adding values of empty positions
    q[5] = 6; q[6] = 7; q[7] = 8;

    // Printing the values of q
    for(int k = 0; k < 7; k++)
    {
        cout << q[k] << endl;
    }
    cout << "------------" << endl;

    // Freeing the array p to avoid memory leak
    free(p);

    // Pointing p towards q
    p = q;

    // Setting q as null
    q = NULL;

    // Printing the value of increased array p from q
    cout << "------ARRAY P FROM Q---------" << endl;
    for(int l = 0; l < 7; l++)
    {
        cout << p[l] << endl;
    }

    return 0;
}
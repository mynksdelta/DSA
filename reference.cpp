#include<iostream>
using namespace std;

int main()
{

    // Using refernces, the original value of the variable is also get updated when reference is updated
    int a = 5;

    // Createing a reference variable
    int &r = a;

    // Printing the value from a
    cout << "A = " << a << endl;

    // Incrementing the value of a using r
    r++;

    // Printing the value from r
    cout << "R++ = " << r << endl;

    // Printing the original value of A
    cout << "A = " << a << endl;

    return 0;
}
#include<iostream>
using namespace std;

// for moving A->C use: A->B and B->C and print A->C
void TOH(int n , int a, int b, int c)
{
    if(n > 0)
    {
        TOH(n-1, a, c, b);
        cout << "(" << a << ", " << c << ")" << endl;
        TOH(n-1, b, a, c);
    }
}

int main()
{
    TOH(3, 1, 2, 3);
    return 0;
}
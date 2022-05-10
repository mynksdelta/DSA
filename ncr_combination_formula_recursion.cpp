#include<iostream>
using namespace std;

// Combination formula is ncr = n! / r! * (n-r)!

int fact(int n)
{
    if(n == 0) return 1;
    else return fact(n-1) * n; 
}

// function ncr() is using non recursive approach
int ncr(int n, int r)
{
    int num = fact(n);
    int den = fact(r) * fact(n-r);
    return num/den;
}

int NCR(int n, int r)
{
    if(r == 0 || n == r) return 1;
    else return NCR(n-1, r-1) + NCR(n-1, r);
}

int main()
{
    cout << "using non recursive approach: " << ncr(5, 3) << endl;
    cout << "using pascals triangle recursive approach: " << NCR(5, 3) << endl;
    return 0;
}
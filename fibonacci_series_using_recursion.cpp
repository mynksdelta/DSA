#include<iostream>
using namespace std;

int F[10];

int fibonacciIterative(int n)
{
    int t0 = 0, t1 = 1, s = 0, i;

    if(n <= 1) return n;

    for(i = 2; i <= n; i++)
    {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }

    return s;
}

int rFib(int n)
{
    if(n <= 1) return n;
    return rFib(n-2) + rFib(n-1);
}

int fibonacciUsingMemoization(int n)
{
    if(n <= 1)
    {
        F[n] = n;
        return n;
    } else {
        if(F[n-2] == -1)
        {
            F[n-2] = fibonacciUsingMemoization(n-2);
        }
        if(F[n-1] == -1)
        {
            F[n-1] = fibonacciUsingMemoization(n-1);
        }

        return F[n-2] + F[n-1];
    }
}

void initializeGlobalArray()
{
    for(int i = 0; i < 10; i++)
    {
        F[i] = -1;
    }
    cout << "Global array initialized by -1" << endl << endl;
}

int main()
{
    initializeGlobalArray();
    cout << "Fibonacci using loop: " << fibonacciIterative(10) << endl;
    cout << "Fibonacci using recursion: " << rFib(10) << endl;
    cout << "Fibonacci using recursion: " << fibonacciUsingMemoization(10) << endl;
    return 0;
}
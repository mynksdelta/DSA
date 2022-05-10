#include<iostream>
using namespace std;

double e(int x, int n)
{
    static double p = 1, f = 1;
    double r;

    if(n == 0)
    {
        return 1;
    }

    r = e(x, n - 1);
    p *= x;
    f *= n;

    return r + p / f;
}

double eHornerResursion(int x, int n)
{
    static double s = 1;
    if(n == 0)
    {
        return s;
    } else {
        s = 1 + x*s/n;
    }
    return eHornerResursion(x, n-1);
}

double eHornerLoop(int x, int n)
{
    double s = 1;
    for(; n>0; n--)
    {
        s = 1 + x*s/n;
    }
    return s;
}

double eIterative(int x, int n)
{
    double s = 1;
    int i;
    double num = 1;
    double den = 1;

    for(i = 1; i <= n; i++)
    {
        num *= x;
        den *= i;
        s += num/den;
    }
    return s;
}

int main()
{
    cout << "Normal using recursion: " << e(4, 15) << endl;
    cout << "Horner's rule using loop: " << eHornerLoop(4, 15) << endl;
    cout << "Horner's rule using recursion: " << eHornerResursion(4, 15) << endl;
    cout << "Normal using loop: " << eIterative(4, 15) << endl;
    return 0;
}
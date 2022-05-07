#include<iostream>
using namespace std;

int pow(int m, int n)
{
    if(n == 0)
    {
        return 1;
    } else {
        return pow(m, n-1) * m;
    }
}

int power1(int m, int n)
{
    if(n == 0)
    {
        return 1;
    }
    if(n % 2 == 0)
    {
        return power1(m*m, n/2);
    }
    else {
        return m * power1( m* m, (n-1) / 2);
    }
}

int main()
{
    cout << pow(2, 8) << endl;
    cout << power1(2, 8) << endl;
}
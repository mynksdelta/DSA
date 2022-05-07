#include<iostream>
using namespace std;

int sumUsingFormula(int n)
{
    return n*(n+1)/2;
}

int sumUsingLoop(int n)
{
    int s = 0;
    for(int i = 0; i <= n; i++)
    {
        s = s + i;
    }
    return s;
}

/*

    Using recurrence relation, this will look like

    sum(n) = 1 + 2 + 3 + ..... + n
    sum(n) = 1 + 2 + 3 + ..... + (n-1) + n   -1
    
    here sum(n-1) = 1 + 2 + 3 + ..... + (n-1)
    using this in -1

    sum(n) = sum(n-1) + n

             |  0            if (n=0)  |  
    sum(n) = |                          |
             |  sum(n-1)     if  (n>0)  |

*/

int sumUsingRecursion(int n)
{
    if(n == 0)
    {
        return 0;
    } else {
        return sumUsingRecursion(n-1) + n;
    }
}

int main()
{
    cout << "Using formula: " << sumUsingFormula(5) << endl;
    cout << "Using Loop: " << sumUsingLoop(5) << endl;
    cout << "Using Recursion: " << sumUsingRecursion(5) << endl;
}
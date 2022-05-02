#include<iostream>
using namespace std;

/*
    In tree recursion, the time complexity depends upon the number of activation records created inside the stack.
    For instance here, 15 records are made when the value is 3. It sums up like 1 + 2 + 4 + 8 = 15.
    This statement can be written as 2(0) + 2(1) + 2(2) + 2(3) which is sum of geometric progression.
    This one can be written as [2(n + 1) - 1].
    So the time complexity becomes o(2(n)), here in x(n), n is the power of x.
    Space complexity will be the maximum height of tree, ie o(n+1), which is 4 in the case of n = 3.
*/

void fun(int n)
{
    if(n > 0)
    {
        cout << n << " ";
        fun(n - 1);
        fun(n - 1);
    }
}

int main()
{
    fun(3);
    return 0;
}
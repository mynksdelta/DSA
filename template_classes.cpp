#include<iostream>
#include<stdio.h>
using namespace std;

/* Template Class is used to make same class usable for more than one data types */
template <class T>
class arithmetic
{
    private:
        T a;
        T b;
    public:
        arithmetic(T a, T b);
        T add();
        T sub();
};

// Have to write template <class T> after every scope ending
template <class T>
// Also pass T as a class parameter like "classname <T>""
arithmetic <T> :: arithmetic(T a, T b)
{
    this -> a = a;
    this -> b = b;
}

template <class T>
T arithmetic <T> :: add()
{
    return this -> a + this -> b;
}

template <class T>
T arithmetic <T> :: sub()
{
    return this -> a - this -> b;
}

int main()
{
    arithmetic <int> m(5, 6);
    cout << m.add() << endl;

    arithmetic <float> n(2.4, 9.3);
    cout << n.add() << endl;

    return 0;
}
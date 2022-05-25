#include<iostream>
using namespace std;

int main()
{
    // Simple 2D array in stack
    int A[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int i, j;

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            cout << A[i][j] << "  ";
        }
        cout << endl;
    }

    cout << "............." << endl;

    // Using pointer
    int *B[2];
    B[0] = (int *) malloc(3*sizeof(int));
    B[1] = (int *) malloc(3*sizeof(int));
    B[1][2] = 5;

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            cout << B[i][j] << "  ";
        }
        cout << endl;
    }

    cout << "............." << endl;

    // Using double pointer
    int **C;
    C = (int **) malloc(2*sizeof(int *));
    C[0] = (int *) malloc(3*sizeof(int));
    C[1] = (int *) malloc(3*sizeof(int));

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            cout << C[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}
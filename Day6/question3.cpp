#include <bits/stdc++.h>
using namespace std;

int isMagicSquare(int a[50][50], int n, int m);

int main()
{
    int a[50][50], n, m;

    cout << "Enter the length of row of the matrix \n ";
    cin >> m;
    cout << "Enter the length of column of the matrix \n";
    cin >> n;

    if (n != m)
    {
        cout << "Length of row and column should be equal.";
        exit(0);
    }

    cout << "Input the element of matrix \n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    if (isMagicSquare(a, n, m))
        cout << "The matrix is Magic Square";
    else
        cout << "The matrix is Not a magic Square";

    return 0;
}

int isMagicSquare(int a[50][50], int n, int m)
{

    int sum1 = 0, sum2 = 0;

    for (int i = 0; i < n; i++)
        sum1 = sum1 + a[i][i];

    for (int i = 0; i < n; i++)
        sum2 = sum2 + a[i][n - 1 - i];

    if (sum1 != sum2)
        return 0;

    for (int i = 0; i < n; i++)
    {

        int rowSum = 0;

        for (int j = 0; j < m; j++)
            rowSum = rowSum + a[i][j];

        if (rowSum != sum1)
            return 0;
    }

    for (int i = 0; i < n; i++)
    {

        int columnSum = 0;

        for (int j = 0; j < n; j++)
            columnSum += a[j][i];

        if (columnSum != sum1)
            return 1;
    }

    return true;
}
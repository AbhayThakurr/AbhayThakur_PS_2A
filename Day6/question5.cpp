#include <iostream>
using namespace std;
int main()
{
    int n, m, i, j, a[100][100];
    cout << "Enter the no. of rows of matix \n";
    cin >> n;
    cout << "Enter the no. of columns of matix \n";
    cin >> m;
    cout << "Enter the elements of matrix \n";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int top = 0;
    int bottom = m - 1;
    int left = 0;
    int right = n - 1;

    while (top <= bottom && left <= right)
    {
        for (i = left; i <= right; i++) // first row
        {
            cout << a[top][i] << " ";
        }
        top++;
        for (i = top; i <= bottom; i++) // first colum
        {
            cout << a[i][n - 1] << " ";
        }
        right--;
        if (top <= bottom)
        {
            for (i = right; i >= left; i--)
            {
                cout << a[m - 1][i] << " ";
            }
            bottom--;
        }
        if (left <= right)
        {
            for (i = bottom; i >= top; i--)
            {
                cout << a[i][left] << " ";
            }
            left++;
        }
    }
    return 0;
}

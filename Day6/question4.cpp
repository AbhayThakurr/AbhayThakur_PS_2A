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
    cout << "180 degree rotation of matrix is \n";
    for (i = n - 1; i >= 0; i--)
    {
        for (j = m - 1; j >= 0; j--)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
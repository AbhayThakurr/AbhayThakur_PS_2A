#include <iostream>
using namespace std;
int main()
{
    int n, mid, sum1 = 0, sum2 = 0, i;
    cout << "Enter the value of n \n";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    mid = n / 2;
    for (i = 0; i < mid; i++)
    {
        sum1 = sum1 + a[i];
    }
    for (i = mid + 1; i < n; i++)
    {
        sum2 = sum2 + a[i];
    }

    if (sum1 == sum2)
    {
        cout << "Balanced";
    }
    else
        cout << "Unbalanced";
    return 0;
}
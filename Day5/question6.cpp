#include <iostream>
using namespace std;
int main()
{
    int n, arr[100], i, temp;
    cout << "Enter the value of n \n";
    cin >> n;
    cout << "Enter the elements of array \n";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (i = 0; i < n / 2; i = i + 2)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
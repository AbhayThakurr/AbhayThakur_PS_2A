#include <iostream>
using namespace std;
int main()
{

    int sum1 = 0, sum2 = 0, mid;
    cout << "Enter the value of n \n";
    int n;
    cin >> n;

    int arr[100];

    cout << "Enter the elements of an array  \n";
    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }

    mid = n / 2;
    for (int i = 0; i < mid; i++)
    {
        sum1 = sum1 + arr[i];
    }
    cout << "Sum of half array is " << sum1 << endl;
    for (int i = mid; i < n; i++)
    {
        sum2 = sum2 + arr[i];
    }
    cout << "Sum of another half array is " << sum2 << endl;
    int mul = sum1 * sum2;
    cout << "Multiply of both half is " << mul;
    return 0;
}
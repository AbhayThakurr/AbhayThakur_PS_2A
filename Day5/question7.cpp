#include <iostream>
using namespace std;
int main()
{
    int n, i;
    int temp;
    cout << "Enter the value of n \n";
    cin >> n;
    int arr[100];
    cout << "Enter the elements of array \n";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    for (int i = 0; i < n; i++)
    {

        cout<<"Reverse of an array " << arr[i] << " ";
    }
    return 0;
}
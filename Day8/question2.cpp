#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, b, k, x;
    cout << "Enter the value of a and b \n";
    cin >> a >> b;
    cout << "Enter the value of k \n";
    cin >> k;
    x = pow(a, b);
    if (k == 1)
    {
        x = x % 10;
        cout << x;
    }
    else
    {
        while (x >= 10)
        {
            x = x / 10;
            cout << x;
        }
    }
    return 0;
}
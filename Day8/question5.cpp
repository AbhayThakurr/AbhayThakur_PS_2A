#include <iostream>
using namespace std;
int leastprime(int n);
int main()
{
    int i, j, n, count = 0, k, a[100];
    cout << "Enter the value of n \n";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        a[i] = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        int x = leastprime(a[i]);
        cout << x << " ";
    }
}
int leastprime(int n)

{
    int f = 0;
    if (n % 2 == 0)
        return 2;
    if (n == 1)
        return 1;
    else
        for (int i = 2; i <= n; i++)
        {
            if (n % i == 0 && i <= n)
                f = i;
        }
    return f;
}

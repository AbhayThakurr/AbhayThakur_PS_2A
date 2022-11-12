#include <iostream>
using namespace std;

int main()
{
    int n, fact;
    cout << "Enter the value of n \n";
    cin >> n;

    cout << "Factorial of " << n << " is " << factorial(n);
}
int factorial(int n)
{
    int fact = 1;
    if (n == 1)
        return fact;

    else
        return (n * factorial(n - 1));
}
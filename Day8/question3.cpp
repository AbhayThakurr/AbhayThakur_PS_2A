#include <iostream>
using namespace std;
int sumNum(int n)
{
    if (n == 0)
        return 0;
    return (n % 9 == 0) ? 9 : (n % 9);
}
int main()
{
    int n, sum1 = 0, sum2 = 0, r1, r2;
    cout << "Enter the value of n \n";
    cin >> n;
    // while (n > 0)
    // {
    //     r1 = n % 10;
    //     sum1 += r1;
    //     n = n / 10;
    // }
    // // if(sum1>9 && n==0)
    // while (sum1 > 0)
    // {
    //     r2 = sum1 % 10;
    //     sum2 += r2;
    //     sum1 = sum1 / 10;
    // }
    // cout << sum2;

    int x = sumNum(n);
    cout << x;

    return 0;
}
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int check(int n)
{
    int r, count = 0, s = 0;
    vector<int> v;
    while (n != 0)
    {
        r = n % 10;
        n = n / 10;
        v.push_back(r);
        count++; // count number of digit
    }
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (abs(v[i] - v[i + 1]) != 1)
        {
            break;
        }
        else
        {
            s = s + 1;
        }
    }
    if (s == (count - 1)) // 123 ->  1-2 = 1   2-3 = 1   1+1=2  i.e count-1
        return 1;
    else
        return 0;
}
int main()
{
    int n, k;
    cout << "Enter the value of n \n" cin >> n;
    cout << "Enter the value of k \n" cin >> k;
    int a[n];
    cout << "Enter the elements of array \n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if ((a[i] > 10) && (a[i] < k) && (check(a[i]) == 1))
        {
            cout << a[i] << " ";
        }
    }
    return 0;
}
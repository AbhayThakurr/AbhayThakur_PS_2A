#include <bits/stdc++.h>
using namespace std;
string ispalindrome(string s)
{
    for (int i = 0; i < s.length() / 2; i++)
    {
        if (s[i] != s[s.length() - i - 1])
        {
            return "It is not a palindrome";
        }
    }
    return "It is a palindrome";
}
int main()
{
    string s;
    cout << "Enter the string \n";
    cin >> s;
    cout << ispalindrome(s);
    return 0;
}
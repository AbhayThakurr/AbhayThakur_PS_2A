#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string s;
    // char s[100];
    int n, count = 0;
    cout << "Enter the string \n";
    cin >> s;
    n = s.length();
    // n = strlen(s);

    cout << "Length of the string is " << n;
    return 0;
}

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[100];
    int n, i, k, count = 0;
    cout << "Enter the string \n";
    gets(s);

    // for (i = 0; s[i] = '\0'; i++)
    // {
    if (s[i] >= 'a' && s[i] <= 'z')
    {
        s[i] = s[i] - 32;
    }

    cout << "String in uppercase is " << s;
    return 0;
}

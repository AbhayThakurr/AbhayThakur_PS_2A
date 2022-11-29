#include <iostream>
#include <cstring>
using namespace std;
int main()
{

    char s[100], temp;
    int i, n, count = 0, j;
    cout << "Enter the string \n";
    gets(s);
    n = strlen(s);
    cout << n;
    for (i = 0; i < n; i++)
    {
        temp = s[0];
    }
    cout << endl;
    for (i = 0; i < n; i++)
    {
        if (temp == s[i])
        {
            count++;
        }
    }
    cout << "The prefix is " << temp << "\nNumber of time it is repeating is " << count;

    return 0;
}
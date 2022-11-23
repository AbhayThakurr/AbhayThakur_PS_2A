#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[100];
    int n, i, k, count = 0;
    cout << "Enter the string \n";
    gets(s);
    n = strlen(s);
    for (i = 0; i < n; i++)
    {

        if (s[i] == ' ')
        {
            count++;
        }
    }

    cout << "No. of words in string is " << count + 1;
    return 0;
}

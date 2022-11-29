#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[100];
    int i, j, count = 0, n;
    cout << "Enter the string \n";
    gets(s);
    for (j = 0; s[j]; j++)
        ;
    n = j;
    for (i = 0; i < n; i++)
    {
        count = 1;
        if (s[i])
        {

            for (j = i + 1; j < n; j++)
            {

                if (s[i] == s[j])
                {
                    count++;
                    s[j] = '\0';
                }
            }

            cout << s[i] << " = " << count << endl;
        }
    }

    return 0;
}
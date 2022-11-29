#include <iostream>
#include <cstring>
using namespace std;
int main()
{

    int i = 0, len = 0, j = 0;
    char str[10000];

    cout << "Enter the string \n";
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        str[i] = str[i + j];
        if (str[i] == ' ')
        {
            j++;
            i--;
        }
    }
    cout << "String after removing all the white spaces \n " << str;

    return 0;
}
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s1[100], s2[100];
    int n, i, k, count = 0;
    cout << "Enter the first string \n";
    gets(s1);
    cout << "Enter the second string \n";
    gets(s2);

    if (strcmp(s1, s2) == 0)
    {
        cout << "Both string are equal ";
    }

    else
        cout << "Both string are not equal ";
    return 0;
}

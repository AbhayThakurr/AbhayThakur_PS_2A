#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    // string s1, s2, s3;
    char s1[100], s2[100], s3[200];
    int n, i, k, count = 0;
    cout << "Enter the first string \n";
    gets(s1);
    // cin >> s1;
    cout << "Enter the second string \n";
    gets(s2);
    // cin >> s2;

    // s3 = s1 + s2;

    cout << strcat(s1, s2);
    return 0;
}

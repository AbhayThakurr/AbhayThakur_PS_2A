
#include <bits/stdc++.h>
using namespace std;
const int CHARS = 26;
int main()
{

    char s1[100], s2[100];
    int i, sum = 0;
    cout << "Enter the first string \n";
    cin >> s1;
    cout << "Enter the second string \n";
    cin >> s2;

    int count1[CHARS] = {0}, count2[CHARS] = {0};
    for (i = 0; s1[i] != '\0'; i++)
    {
        count1[s1[i] - 'a']++;
    }
    for (i = 0; s2[i] != '\0'; i++)
    {
        count2[s2[i] - 'a']++;
    }
    for (i = 0; i < 26; i++)
    {

        sum = sum + abs(count1[i] - count2[i]);
    }
    cout << sum << " ";
    return 0;
}

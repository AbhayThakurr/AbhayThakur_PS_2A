#include <iostream>
#include <algorithm>
using namespace std;

string removeSpaces(string str)
{
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    return str;
}

int main()
{
    string str;
    cout << "Enter the string \n";
    cin >> str;
    str = removeSpaces(str);
    cout << str;
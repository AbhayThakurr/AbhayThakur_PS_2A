#include <iostream>

using namespace std;

void isPrime(int number)
{
    int i = 1, j, count;
    while (i <= number)
    {
        count = 0;
        if (number % i == 0)
        {
            j = 1;
            while (j <= i)
            {
                if (i % j == 0)
                {
                    count++;
                }
                j++;
            }
            if (count == 2)
            {
                cout << i << " is a Prime Factor\n";
            }
        }
        i++;
    }
}

int main()
{
    int number, i = 1, j, count;

    cout << "\nPlease Enter the Number to find the Prime Factors =  ";
    cin >> number;

    isPrime(number);
    return 0;
}
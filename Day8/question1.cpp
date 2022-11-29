#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double d, b, a, c, x, y;
    cout << "Enter the value of a,b and c \n";
    cin >> a >> b >> c;
    d = pow(b, 2) - 4 * a * c;
    // cout << d;
    if (d > 0)
    {
        x = (-b + sqrt(d)) / (2 * a);
        y = (-b - sqrt(d)) / (2 * a);

        cout << "Roots are \n";
        cout << x << " " << y;
    }

    else if (d == 0)
    {
        x = -b / (2 * a);
        cout << "Roots are \n";
        cout << x;
    }

    else if (d < 0)
    {
        x = -b / (2 * a);
        y = sqrt(-d) / (2 * a);

        cout << "Roots are \n";
        cout << x << " + " << y << "i" << endl;

        cout << x << " - " << y << "i" << endl;
    }
    return 0;
}

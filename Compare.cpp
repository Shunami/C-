//Read three numbers and print the largest

#include <stdio.h>
#include <iostream>

using namespace std;

int main(void)
{
    float a,b,c,large;

    cout << "Print a number: "; cin >> a;
    cout << "An other one: "; cin >> b;
    cout << "The last one: "; cin >> c;

    if (a > b)
    {
        large = a;
    }
    else
    {
        large = b;
    }

    if (large < c)
    {
        large = c;
    }

    cout << "The largest number is: " << large << endl;

    return 0;
}

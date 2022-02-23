// C++ code template

// Compile with following command
// "g++ [code_name] -o [output]"

#include <iostream>
#include <cmath>

using namespace std;

double f(double x)
{
    return sqrt(x) - cos(x);
}

double bisection(double a, double b)
{
    int i = 1;
    if (f(a) * f(b) >= 0)
    {
        cout << "Error: provided numbers are equal to 0" << endl;
    }
    int e = 0.00001; // accuracy of 10^-5 as provided in the homework detail
    double c = a;
    while ((b - a) >= e)
    {
        for (i; i <= 50; i++)
        {
            c = (a + b) / 2; // getting the middle point

            if (f(c) == 0.0) // check if ans is the root
                break;
            else if (f(c) * f(a) < 0.0) // decision
                b = c;
            else
                a = c;
            cout << "Repition #" << i << ", approximate root: " << c << endl;
        }
        break;
    }
    cout << "-----------------------------------";
    cout << "\n\nAn approximation of the root is: " << c << "\n\n";
    return c;

    // using https://www.codesansar.com/numerical-methods/bisection-method-online-calculator.htm to verify the answer
}
// main function
int main()
{

    bisection(0.0, 1.1);

    return 0;
}
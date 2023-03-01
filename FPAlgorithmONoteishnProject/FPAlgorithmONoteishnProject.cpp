#include <iostream>

using namespace std;

double PowerLinear(double x, int n);
double PowerBinary(double x, int n);

int main()
{
    

    
}

double PowerLinear(double x, int n)
{
    double power{ 1.0 };

    double x{ 5.5 };
    int n{ 10 };

    for (int i = 0; i < n; i++)
        power *= x;

    return power;
}

double PowerBinary(double x, int n)
{
    double power{ 1.0 };

    /*while (n)
    {
        if (n % 2)
        {
            power *= x;
            n--;
        }
        else
        {
            x *= x;
            n /= 2;
        }
    }*/

    while (n)
    {
        if (n % 2)
            power *= x;
        x *= x;
        n /= 2;
    }
    return power;
}
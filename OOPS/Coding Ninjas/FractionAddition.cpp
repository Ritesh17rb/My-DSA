#include <bits/stdc++.h>
#define ll long long
using namespace std;

class Fraction
{

public:
    int numerator;
    int denominator;

    Fraction(int numerator, int denominator)
    {

        this->numerator = numerator;
        this->denominator = denominator;
    }

    void add(Fraction const &f2)
    {
        int lcm = this->denominator * f2.denominator;
        int x = lcm / this->denominator;
        int y = lcm / f2.denominator;

        int num = x * this->numerator + y * f2.numerator;
        this->numerator = num;
        this->denominator = lcm;

        Simplify();
    }

    void print()
    {
        cout << "Number after Addition is " << this->numerator << "/" << this->denominator << endl;
    }

    void Simplify()
    {
        int gcd = 1;
        int j = min(this->numerator, this->denominator);

        for (int i = 1; i <= j; i++)
        {
            if (numerator % i == 0 && denominator % i == 0)
            {
                gcd = i;
            }
        }
        this->numerator /= gcd;
        this->denominator /= gcd;
    }

    void multiply(Fraction const &f2)
    {
        this->numerator *= f2.numerator;
        this->denominator *= f2.denominator;
        Simplify();
    }
};

int main()
{
    // cout<<"Enter two Fractional Numbers to add"<<endl;

    Fraction f1(100, 100);
    Fraction f2(100, 100);

    // f1.add(f2);
    f1.multiply(f2);
    f1.print();

    return 0;
}
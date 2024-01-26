#include <bits/stdc++.h>
#define ll long long
using namespace std;

class ComplexNum
{
public:
    int real, imaginary;

    ComplexNum(int real, int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }

    void print()
    {
        cout << "The complex Number is " << this->real << "+" << this->imaginary << "i" << endl;
    }
    void add(ComplexNum c)
    {
        this->real += c.real;
        this->imaginary += c.imaginary;
    }
};

int main()
{

    cout << "Enter two Complex Numbers" << endl;

    int real1, imaginary1, real2, imaginary2;

    cin >> real1 >> imaginary1 >> real2 >> imaginary2;

    // ComplexNum c1 = ComplexNum(real1, imaginary1);
    // ComplexNum c2 = ComplexNum(real2, imaginary2);

    ComplexNum c1(real1, imaginary1);
    ComplexNum c2(real2, imaginary2);

    c1.add(c2);

    c1.print();

    return 0;
}
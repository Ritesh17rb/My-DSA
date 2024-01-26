#include <bits/stdc++.h>
#define ll long long
using namespace std;

class ComplexNum
{
private:
    int real;
    int imaginary;

public:
    ComplexNum(int real, int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }

    void print()
    {
        cout << "The Complex Number is " << real << "+" << imaginary << "i" << endl;
    }

    void add(ComplexNum c2)
    {
        this->real = this->real + c2.real;
        this->imaginary = this->imaginary + c2.imaginary;
    }
};

int main()
{
    int real1, imaginary1, real2, imaginary2;
    cin >> real1 >> imaginary1 >> real2 >> imaginary2;

    ComplexNum c1(real1, imaginary1);
    ComplexNum c2(real2, imaginary2);

    c1.add(c2);

    c1.print();

    return 0;
}
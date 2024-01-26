#include <bits/stdc++.h>
#define ll long long
using namespace std;

class Student
{
public:
    int age;
    int rollNumber;

    Student()
    {
        cout << "Constructor 1 is Called" << endl;
    }
    void display()
    {
        cout << "Age is " << age << endl;
        cout << "Roll Number is " << rollNumber << endl;
    }

    Student(int roll)
    {
        cout << "Constructor 2 is Called" << endl;
        rollNumber = roll;
        cout << "addddddd this " << this << endl;
    }
    Student(int age, int rollNumber)
    {
        cout << "Constructor 3 is called " << endl;
        (*this).rollNumber = rollNumber;
        this->age = age;
        cout << "Address " << this << endl;
    }

    ~Student()
    {
        cout << "Destructor Called " << endl;
    }
};

int main()
{

    // Student s1(10);

    Student *s2 = new Student;

    // s1.display();
    s2->display();
    delete s2;

    // cout << "Constructor with Argument-->Paramaterised Constructor" << endl;

    // Student s4;

    // Student s5(10);
    // s5.display();
    // cout << "address- " << &s5;

    // Student *s6 = new Student(10, 101);
    // s6->display();

    // cout << "7th Object " << endl;
    // Student *s7 = new Student(*s6);
    // s7->display();

    // cout << "s8 " << endl;
    // Student s8(*s7);
    // s8.display();

    return 0;
}
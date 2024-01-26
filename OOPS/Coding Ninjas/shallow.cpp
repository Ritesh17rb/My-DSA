#include <bits/stdc++.h>
#define ll long long
using namespace std;

class Student
{
    int age;
    char *name;

public:
    Student(int age, char *name)
    {
        this->age = age;

        // Shallow Copy
        this->name = name;

        // Deep Copy
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }

    void display()
    {
        cout << name << " " << age << endl;
    }
};

int main()
{
    char name[] = "abcd";
    Student s1(10, name);

    s1.display();

    name[3] = '1';
    Student s2(13, name);
    s2.display();
    s1.display();

    return 0;
}
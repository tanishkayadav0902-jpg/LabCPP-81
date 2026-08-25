#include <iostream>
using namespace std;

class Student
{
private:
    int roll;
    string name;

public:
    Student()
    {
        roll = 0;
        name = "Unknown";
    }

    Student(int r)
    {
        roll = r;
        name = "No name";
    }

    Student(int r, string n)
    {
        roll = r;
        name = n;
    }

    void display()
    {
        cout << "Roll No:" << roll << endl;
        cout << "Name:" << name << endl;
    }
};

int main()
{
    Student s1;
    Student s2(81);
    Student s3(81, "Tanishka");

    s1.display();
    s2.display();
    s3.display();

    return 0;
}


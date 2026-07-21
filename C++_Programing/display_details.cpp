#include <iostream>
#include <string>
using namespace std;

class Teacher
{
public:
    string name;
    string dept;
    string sub;
    double salary;
};

int main()
{
    Teacher t1;

    t1.name = "abcd";
    t1.dept = "CSE";
    t1.sub = "Maths";
    t1.salary = 25000;

    cout << "Name: " << t1.name << endl;
    cout << "Department: " << t1.dept << endl;
    cout << "Subject: " << t1.sub << endl;
    cout << "Salary: " << t1.salary << endl;

    return 0;
} 
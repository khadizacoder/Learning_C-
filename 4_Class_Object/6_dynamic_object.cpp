#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int cls;
    int roll;
    double gpa;
    Student(int cls, int roll, double gpa)
    {
        this->cls = cls;
        this->roll = roll;
        this->gpa = gpa;
    }
};
Student *fun()
{
    Student *khadiza = new Student(14, 2, 5.89);
    Student *p = khadiza;
    return p;
}
int main()
{
    Student *p = fun();
    cout << "Class -> " << p->cls << endl;
    cout << "Roll -> " << p->roll << endl;
    cout << "GPA -> " << p->gpa << endl;
    return 0;
}
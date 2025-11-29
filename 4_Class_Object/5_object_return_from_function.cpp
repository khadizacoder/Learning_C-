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
Student fun()
{
    Student khadiza(14, 2, 5.89);
    return khadiza;
}
int main()
{
    Student khadiza = fun();
    cout << "Class -> " << khadiza.cls << endl;
    cout << "Roll -> " << khadiza.roll << endl;
    cout << "GPA -> " << khadiza.gpa << endl;
    return 0;
}
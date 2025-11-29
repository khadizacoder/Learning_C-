#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int cls;
    int roll;
    double gpa;
    Student(int c, int r, double g)
    {
        cls = c;
        roll = r;
        gpa = g;
    }
};
int main()
{
    // Student habiba;
    // habiba.cls = 11;
    // habiba.roll = 4;
    // habiba.gpa = 4.30;

    // Student khadiza;
    // khadiza.cls = 13;
    // khadiza.roll = 2;
    // khadiza.gpa = 4.55;

    // cout << habiba.cls << " " << habiba.roll << " " << habiba.gpa << endl;
    // cout << khadiza.cls << " " << khadiza.roll << " " << khadiza.gpa << endl;

    Student habiba(11, 3, 4.54);
    Student khadiza(14, 24, 4.67);

    cout << habiba.cls << " " << habiba.roll << " " << habiba.gpa << endl;
    cout << khadiza.cls << " " << khadiza.roll << " " << khadiza.gpa << endl;

    return 0;
}
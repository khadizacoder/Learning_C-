#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    char name[100];
    int roll;
    double gpa;
};

int main()
{
    Student a;
    
    char tmp_name[100] = "Khadiza";
    strcpy(a.name, tmp_name);

    a.roll = 5;
    a.gpa = 4.5;

    cout << a.name << " " << a.roll << " " << a.gpa << endl;

    return 0;
}
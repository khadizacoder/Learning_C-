#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
	char name[100];
	int roll;
	char section;
	int math_marks;
	int cls;
    Student(char name[100], int roll, char section, int math_mark, int cls)
    {
        strcpy(this->name, name);
        this->roll = roll;
        this->section = section;
        this->math_marks = math_mark;
        this->cls = cls;
    }
};

int main()
{

    Student s1("Khadiza", 12, 'B', 98, 8);
    Student s2("Habiba", 6, 'A', 75, 8);
    Student s3("Rohima", 8, 'B', 87, 8);

    Student mx = s1;

    if (s2.math_marks > mx.math_marks)
    {
        mx = s2;
    }
    else if(s3.math_marks > mx.math_marks)
    {
        mx = s3;
    }
    
    cout << mx.name << " " << mx.roll << " " << mx.section << " " << mx.math_marks << " " << mx.cls;

    return 0;
}
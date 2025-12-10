#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    Student(string name, int roll)
    {
        this->name = name;
        this->roll = roll;
    }

    void hi()
    {
        cout << "Hello " << name << endl;
    }

    void hello(string name)
    {
        cout << "Hello " << name << endl;
    }
};
int main()
{
    Student habiba("Habiba khatun", 123);
    Student khadiza("Khadiza", 45);

    habiba.hi();
    habiba.hello("Khadiza!");
    khadiza.hi();

    cout << habiba.name << " " << habiba.roll << endl;
    return 0;
}
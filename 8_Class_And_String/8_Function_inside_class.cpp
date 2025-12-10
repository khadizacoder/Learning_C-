#include <bits/stdc++.h>
using namespace std;
class Student 
{
    public:
    string name;
    int roll, math, english;
    Student(string name, int roll, int math, int english)
    {
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
    }

    void totalMark()
    {
        cout <<"Total mark " << name << " -> " << math + english << endl;
    }
};
int main()
{
    Student rakib("Rakib", 3, 89, 67);
    Student amina("Amina khan", 4, 96, 65);

    rakib.totalMark();
    amina.totalMark();

    return 0;
}
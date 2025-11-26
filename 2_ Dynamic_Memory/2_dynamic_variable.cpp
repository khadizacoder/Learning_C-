//* Static variable

/*
#include <bits/stdc++.h>
using namespace std;
int *p;
void fun()
{
    int n = 10;
    p = &n;

    cout << "Fun -> " << *p << endl;
    return;
}
int main()
{
    fun();
    cout << "Main -> " << *p << endl;
    return 0;
}
*/

//* Dynamic variable

#include <bits/stdc++.h>
using namespace std;
int *p;
void fun()
{
    int *n = new int;
    *n = 100;
    p = n;

    cout << "Fun -> " << *p << endl;
    return;
}
int main()
{
    fun();
    cout << "Main -> " << *p << endl;
    return 0;
}

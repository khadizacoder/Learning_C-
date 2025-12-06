/*
1 => Capacity
s.size() -> returns the size of the string.
s.max_size() -> returns the maximum size that string can hold.
s.capacity() -> returns current available capacity of the string.
s.clear() -> clear the string.
s.empty() -> return true/false if the string is empty.
s.resize() -> change the size of the string.
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    //* size()
    string s = "Hello World";
    cout << s.size() << endl;

    //* max_size()
    cout << s.max_size() << endl;

    //* capacity()
    cout << s.capacity() << endl;

    //* clear()
    s.clear();
    cout << s.size() << endl;

    //* empty()

    s.empty() ? cout << "Empty" << endl : cout << "Not empty" << endl;
    cout << s.size() << endl;

    //* resize()
    string str = "Hello Khadiza";
    str.resize(4);
    cout << str << endl;
    
    str.resize(20, 'X');
    cout << str << endl;

    return 0;
}
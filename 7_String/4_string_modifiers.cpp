/*
3 => Modifiers
s+= -> append another string.
s.append() -> append another string.
s.push_back() -> add character to the last of the string.
s.pop_back() -> remove the last character of the string.
s= -> assign string.
s.assign() -> assign string.
s.erase() -> erase characters from the string.
s.replace() -> replace a portion of the string.
s.insert() -> insert a portion to a specific position.
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    //* s+=
    string s = "Hello World";
    string s1 = "Hi";

    // s += s1;
    // cout << s << endl;

    //* s.append()
    cout << s.append(s1) << endl;

    //* s.push_back()
    // s1.push_back('A');

    //* s.pop_back()
    // s1.pop_back();

    //* s=
    s1[0] = 'G';
    cout << s1 << endl;

    //* s.assign()
    string s2 = "Hello";
    s2.assign("Hi");
    cout << s2 << endl;

    //* s.erase() // delate

    string s3 = "Hello World";
    s3.erase(4, 2); // resize()
    cout << s3 << endl;

    //* s.replace()
    string s4 = "Hello World";
    // s4.replace(6, 0, "Bangladesh");
    s4.replace(6, 5, "Bangladesh");
    cout << s4 << endl;

    //* s.insert()
    s4.insert(2, "Khadiza");
    cout << s4 << endl;

    return 0;
}
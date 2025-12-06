/*
2 => Element access
S[i] -> access the ith index of the string.
s.at(i) -> access the ith index of the string.
s.back() -> access the last element of the string.
s.front() -> access the first element of the string.
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    //* S[i]
    string s;
    cin >> s;
    cout << s[0] << endl;

    //* at(i)
    cout << s.at(1) << endl;

    //* back()
    cout << s.back() << endl;
    cout << s[s.size() - 1] << endl;

    //* front()
    cout << s.front() << endl;

    return 0;
}
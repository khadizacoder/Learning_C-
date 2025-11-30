/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    char s;
    int b;
    cin >> a >> s >> b;

    // cout << a << s << b;

    if (s == '>' && a > b || s == '<' && a < b || s == '=' && a == b)
    {
        cout << "Right";
    }
    else if(s == '>' && a < b || s == '>' && a == b || s == '<' && a > b ||  s == '<' && a == b  || s == '=' && a != b || s == '=' && a > b || a < b)
    {
       cout << "Wrong";
    }

    return 0;
}
*/

//* Different way

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    char s;
    cin >> a >> s >> b;

    if (s == '>' && a > b || s == '<' && a < b || s == '=' && a == b)
    {
        cout << "Right";
    }
    else
    {
       cout << "Wrong";
    }

    return 0;
}
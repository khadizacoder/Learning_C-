// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a, b, c;
//     char s, q;
//     cin >> a >> s >> b >> q >> c;

//     if (s == '+' && a + b == c || s == '-' && a - b == c || s == '*' && a * b == c)
//     {
//         cout << "Yes";
//     }
//     else if (s == '+')
//     {
//         cout << a + b;
//     }
//     else if (s == '-')
//     {
//         cout << a - b;
//     }
//     else if (s == '*')
//     {
//         cout << a * b;
//     }

//     return 0;
// }

//* Different way

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    char s, q;
    cin >> a >> s >> b >> q >> c;

    int result = (s == '+')   ? a + b
                 : (s == '-') ? a - b
                 : (s == '*') ? a * b
                 : 0;
                 
    cout << (result == c ? "Yes" : to_string(result));

    return 0;
}
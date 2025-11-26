#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;

    switch (x % 2)
    {
        case 0:
            cout << "Even";
            break;
        case 1:
            cout << "Odd";
            break;
        default: cout << "Plz typing number";
    }
    return 0;
}
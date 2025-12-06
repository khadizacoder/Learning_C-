#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);

    stringstream str(s);
    string world;

    while (str >> world)
    {
        cout << world << endl;
    }
    
    return 0;
}
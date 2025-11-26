#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num1 = 10;
    int num2 = 20;

    //* MIN
    cout << "Min -> " << min(num1, num2) << endl;
    // cout << min({10, 39, 49, 4}) << endl;

    //* MAX
    cout << "Max -> " << max(num1, num2) << endl;
    // cout << max({10, 39, 49, 4}) << endl;

    //* SWAP
    swap(num1, num2);
    cout << "Swap -> " << num1 << " " << num2 << endl;

    return 0;
}
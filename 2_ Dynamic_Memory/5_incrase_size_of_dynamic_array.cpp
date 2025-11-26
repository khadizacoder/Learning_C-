#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int *ary = new int[n + 2];

    for (int i = 0; i < n; i++)
    {
        ary[i] = arr[i];
    }

    ary[n + 0] = 23;
    ary[n + 1] = 24;

    delete[] arr;

    for (int i = 0; i < n + 2; i++)
    {
        cout << ary[i] << " ";
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
class Cricketer
{
    public:
    string country;
    int jersey;

    Cricketer(string country, int jersey)
    {
        this->country = country;
        this->jersey = jersey;
    }
};
int main()
{
    Cricketer* dhoni = new Cricketer("India", 80);
    Cricketer* kohli = new Cricketer("Bangladesh", 20);

    //* 1
    // kohli = dhoni;

    //* 2
    // kohli->country = dhoni->country;
    // kohli->jersey = dhoni->jersey;

    //* 3
    *kohli = *dhoni;

    cout << kohli->jersey << " " << dhoni->jersey << endl;
    
    delete dhoni;
    cout << kohli->country << " " << kohli->jersey << endl;
    
    return 0;
}
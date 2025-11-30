#include <bits/stdc++.h>
using namespace std;

class Cricketer
{
public:
    int jersey_no;
    string country;
};

int main()
{
    // dynamic object dhoni
    Cricketer *dhoni = new Cricketer;
    dhoni->jersey_no = 5;
    dhoni->country = "bangladesh";

    // dynamic object kohli
    Cricketer *kohli = new Cricketer;

    // *dhoni = *kohli;

    // Copy data (manual)
    kohli->jersey_no = dhoni->jersey_no;
    kohli->country = dhoni->country;

    // delete dhoni
    delete dhoni;

    // Print kohli data
    cout << kohli->jersey_no << " " << kohli->country << endl;

    // delete kohli
    delete kohli;

    return 0;
}

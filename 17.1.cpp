#include <iostream>
using namespace std;

class Tpralka
{
public:
    int nr_programu, wysokosc;
    double temp_prania, ladownosc;
    string nazwa;
};

int main()
{
    ///druga kropka
    Tpralka czerwona, czarna, biala;

    ///trzecia kropka
    czerwona.nr_programu = 1;

    ///czwarta kropka
    Tpralka* wskaz = &czarna;
    wskaz -> ladownosc = 5.25;

    ///piata kropka
    Tpralka &bieluch = biala;
    bieluch.nazwa = "frania";

    return 0;
}




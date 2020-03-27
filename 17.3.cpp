#include <iostream>

using namespace std;

class Kalkulator
{
public:
    void dodawanie(int liczba1=0, int liczba2=0)
    {
        cout<<liczba1+liczba2;
    }
    void odejmowania(int liczba1=0, int liczba2=0)
    {
        cout<<liczba1-liczba2;
    }
    void mnozenie(int liczba1=1, int liczba2=1)
    {
    cout<<liczba1*liczba2;
    }
    void dzielenie(int liczba1=1, int liczba2=1)
    {
        cout<<liczba1/liczba2;
    }

};

int main()
{
    Kalkulator k1;

    k1.dodawanie();
    k1.odejmowania();
    k1.mnozenie();
    k1.dzielenie();

    return 0;
}

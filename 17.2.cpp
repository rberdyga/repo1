# include <iostream>

using namespace std;

class Samochod
{
public:

    string marka;
    string model;
    int rocznik;
    int przebieg;

    void wczytaj()
    {
        cout<<endl<<"WCZYTYWANIE"<<endl;
        cout<<"Marka: ";    cin>>marka;
        cout<<"Model: ";    cin>>model;
        cout<<"Rocznik: ";  cin>>rocznik;
        cout<<"Przebieg: "; cin>>przebieg;
    }

    void wypisz()
    {
        cout<<endl<<"WYPISYWANIE"<<endl;
        cout<<"Marka: "<<marka<<endl;
        cout<<"Model: "<<model<<endl;
        cout<<"Rocznik: "<<rocznik<<endl;
        cout<<"Przebieg: "<<przebieg<<endl;
    }
};

int main()
{
    Samochod s1, s2;

    s1.wczytaj();
    s1.wypisz();
    s2.wczytaj();
    s2.wypisz();

    cout<<endl<<s1.marka<<endl;

    return 0;
}

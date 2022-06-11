#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "spis_tresci.h"
using namespace std;

string a, b;
float a_licz;

int main()
{

    int wybor_programu;

    fstream plik;
    plik.open("menu.txt", ios::in);

    if (plik.good() == false)
    {
        cout << "Nie mozna odnalesc pliku z menu!";
        exit(0);
    }
    int nr_linii = 1;
    string linia, menu_linii;

    while (getline(plik, linia))
    {
        switch (nr_linii)
        {
        case 1: cout << linia << endl; break;
        case 2: cout << linia << endl; break;
        case 3: cout << linia << endl; break;
        case 4: cout << linia << endl; break;
        case 5: cout << linia << endl; break;
        case 6: cout << linia << endl; break;
        case 7: cout << linia << endl; break;
        case 8: cout << linia << endl; break;
        }
        nr_linii++;
    }
    /***********************************************************************************************************************/
    cout << "Twoj wybor to: ";
    cin >> wybor_programu;

    Obliczanie o_metry, o_centymetry, o_kilometry, o_mile, o_cale, o_decymetry;

    system("cls");
    if (wybor_programu == 1)
    {
        while (true)
        {
            cout << "Do wyboru: cm, m, km, mi, dm, ca" << endl;
            cout << "Podaj liczbe, jednostke oraz jednostke na ktora trzeba przeliczyc:  ";
            cin >> a_licz >> a >> b;

            if (a == "cm")
            {
                o_centymetry.centymetry(a, a_licz, b);
            }
            else if (a == "m")
            {
                o_metry.metry(a, a_licz, b);
            }

            else if (a == "km")
            {
                o_kilometry.kilometry(a, a_licz, b);
            }
            else if (a == "mi")
            {
                o_mile.mile(a, a_licz, b);
            }
            else if (a == "ca")
            {
                o_mile.cale(a, a_licz, b);
            }

            else cout << "Nie potrafie przeliczyc takiej jednostki :(";
        }
    }
    else cout << "cos musiales zle wpisac";

    return 0;
}
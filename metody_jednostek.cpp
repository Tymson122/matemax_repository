#include <iostream>
#include "spis_tresci.h"
using namespace std;

void Obliczanie::metry(string a, float a_licz, string b)
{
    float suma;
    if (a == "m" and b == "cm")
    {
        suma = a_licz * 100;
        cout << a_licz << " metrow to " << suma << " centymetrow" << endl << endl;
    }

    else if (a == "m" and b == "km")
    {
        suma = a_licz / 1000;
        cout << a_licz << " metrow to " << suma << " kilometrow" << endl << endl;
    }
    else if (a == "m" and b == "mi")
    {
        suma = a_licz * 0.000621371192;
        cout << a_licz << " metrow to " << suma << " mil" << endl << endl;
    }
    else if (a == "m" and b == "ca")
    {
        suma = a_licz * 39.37;
        cout << a_licz << " metrow to " << suma << " cala" << endl << endl;
    }
}

void Obliczanie::centymetry(string a, float a_licz, string b)
{
    float suma;
    if (a == "cm" and b == "m")
    {
        suma = a_licz / 100;
        cout << a_licz << " centymetrow to " << suma << " metrow" << endl << endl;
    }

    else if (a == "cm" and b == "km")
    {
        suma = a_licz / 10000;
        cout << a_licz << " centymetrow to " << suma << " kilometrow" << endl << endl;
    }
    else if (a == "cm" and b == "mi")
    {
        suma = a_licz / 160934.71;
        cout << a_licz << " centymetrow to " << suma << " mil" << endl << endl;
    }
    else if (a == "cm" and b == "ca")
    {
        suma = a_licz * 0.39370;
        cout << a_licz << " centymetrow to " << suma << " cala" << endl << endl;
    }
}

void Obliczanie::kilometry(string a, float a_licz, string b)
{
    float suma;
    if (a == "km" and b == "m")
    {
        suma = a_licz * 1000;
        cout << a_licz << " kilometrow to " << suma << " metrow" << endl << endl;
    }

    else if (a == "km" and b == "cm")
    {
        suma = a_licz * 100000;
        cout << a_licz << " kilometrow to " << suma << " kilometrow" << endl << endl;
    }
    else if (a == "km" and b == "mi")
    {
        suma = a_licz * 0.621371192;
        cout << a_licz << " kilometrow to " << suma << " mil" << endl << endl;
    }
    else if (a == "km" and b == "ca")
    {
        suma = a_licz * 39370.0787;
        cout << a_licz << " kilometrow to " << suma << " cala" << endl << endl;
    }
}

void Obliczanie::mile(string a, float a_licz, string b)
{
    float suma;
    if (a == "mi" and b == "m")
    {
        suma = a_licz * 1609.344;
        cout << a_licz << " mil to " << suma << " metrow" << endl << endl;
    }

    else if (a == "mi" and b == "cm")
    {
        suma = a_licz * 160934.4;
        cout << a_licz << " mil to " << suma << " centymetrow" << endl << endl;
    }
    else if (a == "mi" and b == "km")
    {
        suma = a_licz * 1.6093442;
        cout << a_licz << " mil to " << suma << " kilometrow" << endl << endl;
    }
    else if (a == "mi" and b == "ca")
    {
        suma = a_licz * 63.360;
        cout << a_licz << " mil to " << suma << " cala" << endl << endl;
    }
}

void Obliczanie::cale(string a, float a_licz, string b)
{
    float suma;
    if (a == "ca" and b == "m")
    {
        suma = a_licz * 0.0254;
        cout << a_licz << " cali to " << suma << " metrow" << endl << endl;
    }

    else if (a == "ca" and b == "cm")
    {
        suma = a_licz * 2.54;
        cout << a_licz << " cali to " << suma << " centymetrow" << endl << endl;
    }
    else if (a == "ca" and b == "km")
    {
        suma = a_licz / 39370;
        cout << a_licz << " cali to " << suma << " kilometrow" << endl << endl;
    }
    else if (a == "ca" and b == "mi")
    {
        suma = a_licz * 0.00001578;
        cout << a_licz << " cali to " << suma << " mil" << endl << endl;
    }
}


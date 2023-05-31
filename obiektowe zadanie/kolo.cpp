#include "kolo.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>


Kolo::Kolo() : strataKolejki(false), bankrut(false)
{
    srand(time(NULL));
    wynik = (rand() % 10 + 1) * 100;
}

void Kolo::wyswietlWynik() const
{
    std::cout << "Wylosowana wartosc na kole: " << wynik << std::endl;
}

bool Kolo::czyStrataKolejki() const
{
    return strataKolejki;
}

bool Kolo::czyBankrut() const
{
    return bankrut;
}

int Kolo::zwrocWartosc() const
{
    return wynik;
}
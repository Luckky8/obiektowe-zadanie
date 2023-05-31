#include <fstream>
#include <algorithm>
#include "haslo.hpp"

Haslo::Haslo() {}

void Haslo::wczytajHaslaZPliku(const std::string& nazwaPliku)
{
    std::ifstream plik(nazwaPliku);
    if (plik)
    {
        std::string haslo;
        while (std::getline(plik, haslo))
        {
            listaHasel.push_back(haslo);
        }
        plik.close();
    }
}

void Haslo::losujHaslo()
{
    int indeks = rand() % listaHasel.size();
    hasloDoOdgadniecia = listaHasel[indeks];

    hasloUzytkownika = std::string(hasloDoOdgadniecia.length(), '_');
}

void Haslo::sprawdzHaslo(const std::string& zgadywaneHaslo)
{
    if (zgadywaneHaslo == hasloDoOdgadniecia)
    {
        hasloUzytkownika = hasloDoOdgadniecia;
    }
}

int Haslo::sprawdzZgadniecie(char litera)
{
    int zgadl = 0;
    for (size_t i = 0; i < hasloDoOdgadniecia.length(); i++)
    {
        if (std::tolower(hasloDoOdgadniecia[i]) == std::tolower(litera))
        {
            if (hasloUzytkownika[i] == '_')
            {
                zgadl++;
                hasloUzytkownika[i] = hasloDoOdgadniecia[i];
            }
        }
    }
    return zgadl;
}

bool Haslo::czyHasloZgadniete() const
{
    return hasloUzytkownika == hasloDoOdgadniecia;
}
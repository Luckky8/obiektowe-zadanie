#include "gracze.hpp"

Gracze::Gracze() : indeksObecnegoGracza(0) {}

void Gracze::dodajGracza(const std::string& imie)
{
    Gracz gracz;
    gracz.imie = imie;
    gracz.kasa = 0;
    gracz.portfel = 0;
    listaGraczy.push_back(gracz);
}

void Gracze::przejdzDoNastepnegoGracza()
{
    indeksObecnegoGracza = (indeksObecnegoGracza + 1) % listaGraczy.size();
}

void Gracze::obecnyGraczBankrutuje()
{
    listaGraczy[indeksObecnegoGracza].kasa = 0;
    listaGraczy[indeksObecnegoGracza].portfel = 0;
}

void Gracze::dodajKase(int kwota)
{
    listaGraczy[indeksObecnegoGracza].kasa += kwota;
}

std::string Gracze::obecnyGracz() const
{
    return listaGraczy[indeksObecnegoGracza].imie;
}
#ifndef GRACZE_HPP
#define GRACZE_HPP

#include <string>
#include <vector>

struct Gracz
{
    std::string imie;
    int kasa;
    int portfel;
};

class Gracze
{
public:
    Gracze();
    void dodajGracza(const std::string& imie);
    void przejdzDoNastepnegoGracza();
    void obecnyGraczBankrutuje();
    void dodajKase(int kwota);
    std::string obecnyGracz() const;

private:
    std::vector<Gracz> listaGraczy;
    int indeksObecnegoGracza;
};

#endif
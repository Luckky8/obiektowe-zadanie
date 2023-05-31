#ifndef HASLO_HPP
#define HASLO_HPP

#include <string>
#include <vector>
#include <conio.h>
#include <Windows.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <string>  
#include <fstream>
#include <vector>
#include <cstring>
#include <cassert>
#include <locale.h>
class Haslo
{
public:
    Haslo();
    void wczytajHaslaZPliku(const std::string& nazwaPliku);
    void losujHaslo();
    void sprawdzHaslo(const std::string& zgadywaneHaslo);
    int sprawdzZgadniecie(char litera);
    bool czyHasloZgadniete() const;


private:
    std::vector<std::string> listaHasel;
    std::string hasloDoOdgadniecia;
    std::string hasloUzytkownika;
};

#endif
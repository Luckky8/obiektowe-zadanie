#ifndef MENU_HPP
#define MENU_HPP
#include "kolor.hpp"
#include <iostream>

class Menu
{
public:
    Menu();
    void wyswietlMenu() const;
    char wczytajWybor() const;
    char wczytajZnak() const;
    void wyswietlSeparator() const;
    void wyswietlKomunikatZgadl(const std::string& gracz, int kwota) const;
    void wyswietlKomunikatNieZgadl() const;
};

#endif
#include "menu.hpp"

Menu::Menu() {}

void Menu::wyswietlMenu() const
{

    std::cout << "\033[1;31m" << "============================" << "\033[0m" << std::endl;
    std::cout << "1. Zgadnij haslo" << std::endl;
    std::cout << "2. Obroc kolo" << std::endl;
    std::cout << "\033[1;31m" << "============================" << "\033[0m" << std::endl;
    std::cout << "Wybor: ";
}

char Menu::wczytajWybor() const
{
    char wybor;
    std::cin >> wybor;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return wybor;
}

char Menu::wczytajZnak() const
{
    char litera;
    std::cout << "Podaj litere: ";
    std::cin >> litera;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return litera;
}

void Menu::wyswietlSeparator() const
{
    std::cout << "---------------------------" << std::endl;
}

void Menu::wyswietlKomunikatZgadl(const std::string& gracz, int kwota) const
{
    std::cout << gracz << " zgadl! Wygrywasz " << kwota << " zl!" << std::endl;
}

void Menu::wyswietlKomunikatNieZgadl() const
{
    std::cout << "Nie zgadles! Kolej na nastepnego gracza." << std::endl;
}
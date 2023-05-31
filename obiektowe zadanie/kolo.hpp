#ifndef KOLO_HPP
#define KOLO_HPP

class Kolo
{
public:
    Kolo();
    void wyswietlWynik() const;
    bool czyStrataKolejki() const;
    bool czyBankrut() const;
    int zwrocWartosc() const;

private:
    int wynik;
    bool strataKolejki;
    bool bankrut;
};

#endif
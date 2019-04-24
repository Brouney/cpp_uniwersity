#pragma once
#include "AttColor.h"
#include "Printable.h"
#include <string>
#include <iostream>
class AttColor;
class Printable;

// klasa reprezentująca linie
class MyLine : public Printable, public AttColor
{
  public:
    //konstruktor klasy, który tworzy obiekty po których dziedziczy, oraz zapisuje wartości char oraz ilosci
    MyLine(char znak, int ilosc, enum AttColor::Option opt) : Printable(std::string(ilosc, znak)), AttColor(opt)
    {
        ch = znak;
        il = ilosc;
    }

    //metoda zwracająca string
    std::string rawString() const override { return std::string(il, ch); }

    //metoda zmieniająca ilość znaków w obiekcie MyLine oraz zapisuje do obiektu klasy Printale stringa skladajacego sie z danej ilosci
    //elementow
    void setLength(int ilosc)
    {
        il = ilosc;
        printed = std::string(il, ch);
    }

    //metoda zmieniająca znak oraz zapisująca w obiekcie Printable stringa skladajacego sie z danej ilosci elementow
    void setChar(char znak)
    {
        ch = znak;
        printed = std::string(il, ch);
    }

  protected:
    //zmienne
    char ch;
    int il;
};
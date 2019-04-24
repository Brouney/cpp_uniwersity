#pragma once
#include "AttColor.h"
#include "AttFormat.h"
#include "Printable.h"
#include <iostream>
#include <string>
class AttColor;
class AttFormat;
class Printable;

//klasa reprezentujaca tekst, ktory ma zostac wydrukowany
class MyText : public Printable, public AttFormat, public AttColor
{

  public:
    //kontruktor tworzacy nowy obiekt, otrzymujacy tekst, format do wypisania oraz kolor napisu
    MyText(std::string ttext, enum AttFormat::Option fformat, enum AttColor::Option ccolor) : Printable(ttext), AttFormat(fformat), AttColor(ccolor) {}
    
    //metoda zwracajaca format tekstu
    AttFormat::Option getFormat() const { return format; }

    //metoda zwracajaca kolor tekstu
    AttColor::Option getColor() const { return color; }

    //metoda ustawiajaca format tekstu
    void setFormat(AttFormat::Option opt) { format = opt; }

    //metoda zwracajaca string do wydrukowania
    std::string rawString() const override { return printed; }

    //metoda przypisujaca znak do drukowania
    void setText(std::string znak) { printed = znak; }
};
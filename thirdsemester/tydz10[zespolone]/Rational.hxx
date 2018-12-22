#pragma once

#include "Complex.hxx"
#include "Fun.hxx"
#include <iostream>

class Rational{

public:

    //zaprzyjaznienie miedzy klasami
    friend class Fun;
    friend class Complex;

    //kontruktor klasy Rational tworzacy obiekt
    Rational(double a,double b);

    //funkcja wypisujaca zawartosc obiektu
    void Print()const;

    //operator konwertujacy na klase Complex
    operator Complex();

private:

    //zmienne
    double licz;
    double mian;

};
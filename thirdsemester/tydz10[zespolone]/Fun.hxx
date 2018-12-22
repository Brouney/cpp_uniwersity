#pragma once

#include <iostream>
#include "Rational.hxx"
#include "Complex.hxx"


class Complex;
class Rational;


 class Fun{

public:

    //funkcja obliczajaca modul liczby zespolonej
    static double Modulo( const Complex& a);

    //funckja dodajaca liczby zespolone
    static Complex Add( const Complex& a, const Complex& b);
    
    //funkcja mnozaca liczbe zespolona
    static Complex Multiply( const Complex a, const Complex& b);

};
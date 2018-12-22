#pragma once

#include "Rational.hxx"
#include <iostream>
#include "Fun.hxx"

 class Complex{

public:
    friend class Rational;
    friend class Fun;
    
    //kontruktor przyjmujacy jedna lub 2 wartosci i tworzacy obiekt
    Complex(double a,double b=0);

    //kontruktor kopiujacy
    Complex(const Complex& a);
    
    //operator zmieniajacy obiekt na liczbe double
    operator double();

    //metoda zwracajaca wartosc urojona
    int Im()const;

    //metoda wypisujaca zawartosc obiektow
    void Print()const;

    //deklaracje funkcji, aby wszystko działało
    static Complex Add(const Complex &a, const Complex &b);
	static Complex Multiply(const Complex &a,const Complex &b);
	static double Modulo(const Complex &a);


private:

    //zmienne 
    double re;
    double im;

};
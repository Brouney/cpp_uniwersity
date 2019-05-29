#pragma once

#include <string>
#include <iostream>
#include <iomanip>

//klasa NicePrinter sluzaca do wypisywania na ekran 
class NicePrinter{

public:
    //konstruktor klasy NicePrinter otrzymujacy element do zapisu
    NicePrinter(int a): width(a){}
    
    //szablonowy operator () sluzacy do wypisania przekazanego elementu oraz 
    //zwiekszajacy statyczny element counter o 1, aby tekst byl ladnie wypisany
    template<typename T> 
    void operator()(const T& toprint)const{
        std::cout << std::setw( width ) << counter++ << ": "<< toprint << std::endl;
    }

private:
    //wartosc wskazujaca jaka musi byc stala szerokosc prefiksu
    int width;

    //statyczna liczba wskazujaca ktora linijka jest wypisywana
    static int counter;

};

//poczatkowa wartosc elementu statycznego counter
int NicePrinter::counter = 1;
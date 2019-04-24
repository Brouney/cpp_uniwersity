#pragma once 
#include <iostream>
#include "Visitor.h"

//klasa obliczajaca oraz przechowujaca sume wartosci obiektow,dziedziczaa po klasie Visitor
class AccumulatingVisitor : public Visitor{
public:
    //konstruktor klasy AccumulatingVisitor, ktory tworzac obiekt klasy, zapisuje wartosc sumy na 0
    AccumulatingVisitor();

    //destruktor,ktory jest default
    ~AccumulatingVisitor()=default;

    //przeladowana metoda visit, otrzymujaca wskaznik do obiektu klasy IntData, dodajaca do wartosci sum wartosc ze wskaznika data
    void visit(const IntData* data);

    //przeladowana metoda visit, otrzymujaca wskaznik do obiektu klasy FloatData, dodajaca do wartosci sum wartosc z elementu data
    void visit(const FloatData* data);

    //metoda zwracajaca wartosc sum
    float getTotalSum()const ;
private:
    //wartosc sumy z przekazanych elementow
    float sum;

};
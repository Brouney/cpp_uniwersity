#pragma once 
#include <iostream>
#include "Visitor.h"
class IntData;
class FloatData;

//klasa dziedziczaca po klasie Visitor
class PrintingVisitor : public Visitor{
public:
    //deklaracja przeladowanej metody visit otrzymujacej wskaznik do obiektu klasy IntData
    void visit(const IntData* data);

    //deklaracja przeladowanej metody visit otrzymujacej wskaznik do obiektu klasy FloatData
    void visit(const FloatData* data);

};
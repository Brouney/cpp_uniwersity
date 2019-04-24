#pragma once 
#include <iostream>
class IntData;
class FloatData;

//klasa definiujaca interfejs dla klas pochodnych: AccumulatingVisitor oraz PrintingVisitor
class Visitor{
public:
    //wirtualne deklaracje przeladowanych metod
    virtual void visit(const IntData* data) = 0;
    virtual void visit(const FloatData* data) = 0;
};


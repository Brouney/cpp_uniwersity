#pragma once 
#include <iostream>
class Visitor;

//klasa definiujaca interfejs dla klas pochodnych IntData oraz FloatData
class Data{
public:
    //wirtualna deklaracja metody acceptVisitor
    virtual void acceptVisitor( Visitor& v) = 0;

};
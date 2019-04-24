#pragma once
#include <iostream>
#include <string>

//klasa reprezentujaca obiekt który bedzie wypisywany
class Printable
{

  public:
    //kontruktor zapisujacy string
    Printable(std::string print) : printed(print) {}

    //wirtualna metoda, która będzie implementowana w klasach pochodnych
    virtual std::string rawString() const = 0;

    //informacja tekst do wypisania
    std::string printed;
};
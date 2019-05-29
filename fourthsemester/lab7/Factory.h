#pragma once
#include <iostream>
#include <string>
#include "Value.h"
class Value;

class Factory{

public:
    Factory(double pocz,double kon):poczatek(pocz),koniec(kon),ilosc(0) {
        std::cout<<"Build factory with range ["<<pocz <<", " << kon<<" ]"<<std::endl;
    }


    Value* PrepareValue(std::string str, double val);

    double poczatek;
    double koniec;
    Value* value[5];
    int ilosc;

};
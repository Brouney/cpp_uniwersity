#pragma once
#include <iostream>
#include <string>
class Factory;
#include "Factory.h"
class OutOfRange{

public:
    OutOfRange(Factory* fact,double val,std::string str);
    void CleanFactory();
    friend std::ostream& operator <<(std::ostream& ostr,OutOfRange& exception);
    Factory* factory;
    double value;
    std::string text;
};
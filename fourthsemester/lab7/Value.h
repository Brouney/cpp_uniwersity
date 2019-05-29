#pragma once
#include <iostream>
#include <string>


class Value{
public:
    Value(){}
    Value(std::string str,double val):nazwa(str),liczba(val){
        std::cout<< "Manufacturing value "<<val<<std::endl;
    }
    ~Value();
    void Print()const;

    std::string nazwa;
    double liczba;

};
#include "Calc_error.h"
#include <iostream>

Calc_error::Calc_error(std::runtime_error* err, const std::string &str,std::string file,int line): std::runtime_error(str), Err(err), File(file), Line(line){}

Calc_error::~Calc_error(){}

void Calc_error::print()const{
    std::cout << " -- z powodu: " << this->what() << ", [plik = " << File << ", linia = " << Line << "]\n";
}

void Calc_error::handler(){

    try{
        throw;
    }
    catch(std::runtime_error* err){
            std::cout<<" Zlapano wyjatek \n";
        while(err){
            Calc_error* newcalc = dynamic_cast<Calc_error*>(err);
            if(newcalc){
                newcalc->print();
                err=newcalc->Err;
                delete newcalc;
            }
            else{
                std::cout << " -- z powodu: "<< err->what() << "\n";
                delete err;
                break;
            }
        }
    }
}
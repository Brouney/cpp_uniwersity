#include "OutOfRange.h"


OutOfRange::OutOfRange(Factory* fact,double val,std::string str):factory(fact),value(val),text(str) {}
    
    void OutOfRange::CleanFactory(){
        for(int i=0;i< factory->ilosc;i++){
            delete factory->value[i];
        }
        delete factory;
        std::cout << "Factory destroyed." << std::endl;
    }
    std::ostream& operator <<(std::ostream& ostr,OutOfRange& exception){
           ostr<< "Value named: "<<exception.text<<" has value "<<exception.value<<" which is outside of the allower range: ["<< exception.factory->poczatek<<", "<< exception.factory->koniec<<"]";
            return ostr;
    }
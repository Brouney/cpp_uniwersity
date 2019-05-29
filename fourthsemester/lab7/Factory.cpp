#include "Factory.h"
#include "OutOfRange.h"

Value* Factory::PrepareValue(std::string str, double val){
    
    
    Value *licz = new Value(str,val);
    value[ilosc] = licz;
    ilosc++;
    if(val<poczatek || val>koniec){
       OutOfRange range(this,  val,  str);
        throw range;
    }
    
    return licz;
}
#include "Value.h"


void Value::Print()const{
    std::cout << nazwa << " "<<liczba<<"\n";
}

Value::~Value(){
    std::cout<<" Destroing value "<<liczba<<"\n";
    
}
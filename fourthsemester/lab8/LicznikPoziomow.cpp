#include "LicznikPoziomow.h"

int LicznikPoziomow::count=0;

LicznikPoziomow::LicznikPoziomow(){
    std::cout << "Rozpoczynamy poziom numer "<< ++count << "\n";
}

LicznikPoziomow::~LicznikPoziomow(){
    std::cout << "konczymy poziom numer "<< count-- << "\n";
}

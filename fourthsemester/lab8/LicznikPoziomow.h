#pragma once
#include <iostream>

//klasa pomocnicza liczaca na ktorym poziomie jestesmy 
class LicznikPoziomow{

public:
    //glosny konstruktor zwiekszajacy wartosc count-poziomu oraz wypisujacy na ktory poziom zwiekszyl
    LicznikPoziomow();
    
    //glosny destruktor zmniejszajacy wartosc count-poziomu oraz wypisujacy na ktory poziom zmniejszyl
    ~LicznikPoziomow();
private:
    //statyczna wartosc poziomu
    static int count;
};
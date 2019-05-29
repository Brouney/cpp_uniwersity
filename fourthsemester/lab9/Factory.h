#pragma once

//klasa Factory sluzaca do zapisywania oraz zwracania wartosci
class Factory{

public:
    //metoda szablonowa base otrzymujaca zmienny parametr a
    //zapisujaca wartosc a gdy element print nie jest przekazywany
    //zwraca wartosc zapisana
    template<typename T>
    T base(T a,bool val = false){
        static T wart;
        if(val == false){
            wart = a;
        }
        return wart;
    }

    //metoda szablonowa product zwracajaca element z funkcji
    //base, wywolana poprzez przekazanie T() oraz elementu bool true
    template<typename T>
    T product(){
        return base(T(),true);
    }

};
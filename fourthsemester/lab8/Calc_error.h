#pragma once
#include <iostream>
#include <string>

//klasa sluzaca do obslugi wyjatkow, dziedziczaca po std::runtime_error, aby moznabylo zapisywac oraz bezproblemowo
//dostawac elementy
class Calc_error: public std::runtime_error{
public:

    //konstruktor klasy, otrzymujacy element z poziomu wyzej, nazwe wyjatku,nazwe pliku oraz linie w ktorym
    //wystapil blad. zapisuje elementy oraz wywoluje konstruktor klasy std::runtime_error
    Calc_error(std::runtime_error* err, const std::string& str,std::string file,int line);
   
    //destruktor 
    ~Calc_error()throw();

    //statyczna metoda sluzaca do usuwania oraz przedstawiania wyjatkow
    static void handler();

    //metoda nic nie zwracajaca, sluzaca do wypisywania elementow z obiektu klasy Calc_error
    void print()const;

private:
    //wskaznik do elementu przekazanego z poziomu wyzej, aby zrobic liste z poprzednich elementow - wyjatkow
    std::runtime_error* Err;
    
    //element przechowywujacy nazwe pliku gdzie wystepuje blad
    std::string File;

    //element przechowywujacy wartosc w ktorej linii znajduje sie blad
    int Line;
};
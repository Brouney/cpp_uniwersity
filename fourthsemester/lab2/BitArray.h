#pragma once
#include "Bit.h"
class Bit;
class BitArray{

public:
    //kontruktor otrzymujacy ilosc bitow - number oraz wartosc true or false, zapisujacy do zmiennej dlg number oraz alokujacy pamiec na tablice
    BitArray(const int number,const bool val = false);

    //destruktor usuwajacy zaalokowana tablice
    ~BitArray();

    //przeladowanie operatora [], zwracajacy pojedynczy element
    Bit operator [] (  int pos)const;

    //operator = przypisujacy do  wartosc z tab
    void operator = (const BitArray & tab);

    //metoda wypisujaca pojedyncze 
    void print()const;

private:

    //tablica w ktorej zapisujemy komorki char
    unsigned char *BITS;

    //ilosc bitow
    int dlg;


};
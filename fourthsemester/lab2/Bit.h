#pragma once

//klasa pomocnicza BitArray sluzaca do obslugi bitow
class Bit{

public:

    //kontruktor klasy otrzymujacy miejsce w komorce oraz wskaznik do adresu komorki
    //z klasy BitArray 
    Bit(const int dlg , unsigned char *position );
    
    //operator bool
    operator bool()const;

    //przeladowanie operatora = , sluzy do przypisania bool do komorki
    void operator = (const bool)const;

private:
    //zmienna zawierajaca char
    unsigned char  * BIITS;
    //pozycja w komorce
    int positionincell;
};
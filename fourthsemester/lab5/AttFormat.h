#pragma once

//klasa reprezentująca formatowanie tekstu
class AttFormat
{

  public:
    //zmienne enum reprezentujace formatowanie tekstu
    enum Option
    {
        BOLD,
        DIM,
        UNDERLINED,
        RESET
    };

  public:
    //kontruktor klasy przypisujacy format tekstu do zmiennej format typu enum 
    AttFormat(Option form) : format(form) {}

    //wirtualna funkcja, która jest definiowana w niższej klasie
    virtual Option getFormat() const = 0;

    //zmienne enum 
    Option format;
};
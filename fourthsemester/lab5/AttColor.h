#pragma once

//klasa reprezentująca kolory
class AttColor
{
  public:
    //zmienna enum reprezentujaca kolor tekstu
    enum Option
    {
        BLACK,
        RED,
        GREEN,
        YELLOW,
        BLUE,
        MAGENTA,
        CYAN,
        GRAY,
        WHITE,
        RESET
    };

  public:
    //konstruktor zapisujacy enum do zmiennej color 
    AttColor(Option col) : color(col) {}

    //metoda zmieniajaca enum color na przekazana opcje opt
    void setColor(AttColor::Option opt) { color = opt; }

    //metoda zwracajaca color
    AttColor::Option getColor() const { return color; }
    
    //zmienna color 
    Option color;
};
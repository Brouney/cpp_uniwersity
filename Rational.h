#pragma once

class Rational{

public:

    //kontruktor otrzymujacy 2 lub jedna liczbe kontruujący 
    //obiekt, nie pozwala aby zstworzyc go niejawnie
    explicit Rational(int licznik = 0, int mianownik = 1 );
    
    //destruktor
    ~Rational();

    //przeciazenie operatora + zwracajacy sume 2 obiektow
    Rational operator+(const Rational& toadd)const;

    //przeciazenie operatora - zzwracajaca roznice 2 obiektow
    //czyli sumę roznicy
    Rational operator-(const Rational& tominus)const;

    //przeciazenie operatora - odwracajacy obiekt na ujemna
    //wartosc
    Rational operator-()const;

    //przeciazenie operatora * mnozacy 2 obiekty
    Rational operator*(const Rational& tomultiply)const;

    //metoda wypisujaca zawartosc
    void Print()const;

    //operator przeksztalcajacy obiekt w wartosc double
    explicit operator double();


private:

    //deklaracje zmiennych
    int licznikk;
    int mianownikk;

    //funkcja skracajaca ułamki
    void NWD();


};
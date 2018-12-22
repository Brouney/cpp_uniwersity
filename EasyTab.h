#pragma once

class EasyTab{

public:

    /**
    * kontruktor dostajacy 2 argumenty oznaczajace poczatkowe oraz koncowe 
    * indeksy tablicy,tworzy tablice z mozliwymi ujemnymi indeksami oraz 
    * przypisuje zmienne
    */
    EasyTab(const int,const int);
    
    /**
    *konstruktor kopiujacy, dostajacy w argumencie obiekt.
    *tworzy obiekt symetryczny do podanego
    */
    EasyTab(EasyTab &);

    /**
    *konstruktor kopiujacy, dostajacy w argumencie obiekt 
    *oraz wartosci w jakim zakresie musi byc skopiowana tablica
    *z podanego obiektu
    */
    EasyTab(const EasyTab&,const int,const int);
     
    /**
    *destruktor
    *usuwa tablice 
    */
    ~EasyTab();

    /**
    *metoda dostajaca wartosc, zmienia wszystkie wartosci w tablicy
    *o podana wartosc
    */
    void setAll(double);
    
   
    /**
    *metoda otrzymujaca wartosc- jest to kolejnosc w ktory element
    *trzeba zapisac zmienna. metoda zwraca referencje do zadanego elementu
    */
    double & at(int);

    /**
    *metoda otrzymujaca wartosc- jest to kolejnosc w ktory element
    *trzeba zapisac zmienna. metoda zwraca referencje do zadanego elementu
    */
    double & at(int)const;

    /**
    *metoda statyczna otrzymujaca obiekt typu EasyTab
    *jej zadaniem jest wypisanie wartosci z tablicy
    */
    static void print(const EasyTab &);

    /**
    *metoda zwraca wartosc poczatku zakresu tablicy
    */
    int getpocz(void)const;

    /**
    *metoda zwraca wartosc  konca zakresu tablicy
    */
    int getkon(void)const;

    /**
    *metoda zwracajca informacje typu bool, czy wartosc podana do metody 
    *jest z zakresu tablicy
    */
    bool inRange(int)const;

    /**
    *metoda zwracajaca wartosc wielkosci tablicy
    */
    int getsize(void);

    /**
    *metoda zwracajaca wartosci z zadanego indeksu tablicy
    */
    double gettab(int)const;

  
private:
   
    //wartosc - jaka jest wartosc poczatku zakresu indeksowania tablicy
    int e_pocz;

    //wartosc - jaka jest wartosc konca zakresu indeksowania tablicy
    int e_kon;

    //wartosc wielkosci tablicy
    int e_size;

    //tablica typu double przetrzymujaca zadane wartosci
    double *tab;

};
#pragma once

class MapPoint {

public:
    
    /*
    konstruktor dostający w argumentach współrzędne geograficzne, tworzacy obiekt 
    */
    MapPoint( const double, const double );
    
    /*
    desktruktor usuwajacy obiekt oraz wypisujący wartość obiektu usuwanego
    */
    ~MapPoint();
    
    /*
    metoda wypisujaca wartości zawarte w obiekcie, nie dostaje argumentów
    */
    void print() const;
   
    /*
    metoda otrzymująca 2 wartości typu const double, zmieniajaca w obiekcie wartosci o zadana 
    otrzymaną wartość
    */
    void move( const double, const double );
   
    /*
    zmienna publiczna statyczna do numerowania obiektow
    */
    static int point;
  
    /*
    metoda otrzymujaca referencje 2 obiektów, zwracajaca obiekt, ktory znajduje się dalej od zadanego 
    obiektu
    */
    MapPoint& furtherFrom( MapPoint &first, MapPoint &seccond)const;

    /*
    metoda otrzymująca referencje 2 obiektów, oblicza współrzędne pomiędzy otrzymanymi obiektami
    */
    static MapPoint inTheMiddle(const MapPoint &first,const MapPoint &seccond);

private:
    /*
    prywatna metoda wypisująca wspolrzedne obiektow
    */
    void wypisz()const;
    
    
    //latitude oraz longitude - zmienne prywatne zawierajace współrzędne geograficzne
    double latitude;
    double longitude;
    


};
   
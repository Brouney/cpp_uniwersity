#pragma once

#include <iostream>
#include <string>

//klasa szablonowa przechowujaca tablice dynamiczna
template<typename T>
class DynArray{

public:
    //konstruktor przyjmujacy wartosc a, zapisujacy wartosc a do wartosci dlg
    //oraz tworzy tablice o typie T o zadanej dlugosci a
    DynArray(int a);

    //kontruktor przyjmujacy wartosc a oraz wskaznik do tablicy arr, zapisuje wartosc
    //a do dlug oraz tworzy tablice o zadanej dlugosci oraz przepisuje arr do data
    DynArray(int a, const T* arr);

    //destruktor usuwajacy zawartosc data
    ~DynArray();

    //przeladowany operator [] zwracajacy wartosc o ustalonym indeksie a
    T& operator[](int a);

    //metoda zwracajaca wskaznik do poczatku tablicy data
    T* begin() const;

    //metoda zwracajaca wskaznik do konca tablicy data
    T* end() const;

    //metoda zwracajaca dlugosc tablicy
    int size() const { 
        return dlg; 
    }
    
    //klasa obslugujaca poruszanie sie po tablicy
    class Iterator{
    public:

        //kontruktor kopiujacy zapisujace begin do data
        Iterator(T* begin);

        //przeladowanie operatora ->, zwraca wskaznik 
        T* operator -> ();

        //przeladowanie operatora *, zwraca referencje
        T&  operator * ();

        //przeladowanie operatora !=, sluzy do porownywania elementow
        bool operator != (const T* obj);

        //przeladowanie operatora ++, sluzy do przesuwania elementu po tablicy
        void operator ++ ();
        
    private:
        //zawartosc klasy Iterator, wskaznik do pojedynczego elementu tablicy
        T* data;
    };

    //wskaznik klasy DynArray, przetrzymujacy cala tablice
    T* data;

    //dlugosc tablicy
    int dlg;
};


template<typename T>
DynArray<T>::DynArray(int a) :dlg(a){
    data = new T[a];
}
 
template<typename T>
DynArray<T>::DynArray(int a, const T* arr) :dlg(a){
    data = new T[a];
    for(int i = 0; i < a; i++){
        data[i]=arr[i];
    }
}

template<typename T>
DynArray<T>::~DynArray(){
    delete[] data;
}

template<typename T>
T& DynArray<T>::operator[] (int a){ 
    return data[a];
}

template<typename T>
std::ostream& operator<<(std::ostream& ostr, const DynArray<T> & dyn){
    ostr << "{";
    for(int i = 0; i < dyn.size(); i++){
        ostr << "\"" << dyn.data[i] << "\"";
        if(i < dyn.size() - 1)
            ostr << ",";
    }
    ostr << "}";
    return ostr;
}

template<typename T>
T* DynArray<T>::begin() const{ 
    return data;
}

template<typename T>
T* DynArray<T>::end() const{
    return data + dlg;
}

template<typename T>
DynArray<T>::Iterator::Iterator(T* begin) :data(begin){}

template<typename T>
T* DynArray<T>::Iterator::operator -> (){
    return data;
}

template<typename T>
T&  DynArray<T>::Iterator::operator * (){ 
    return *(data);
}

template<typename T>
bool DynArray<T>::Iterator::operator != (const T* obj){
    return data != obj;
}

template<typename T>
void DynArray<T>::Iterator::operator ++(){
    ++data;
}
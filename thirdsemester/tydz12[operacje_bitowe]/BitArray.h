#pragma once
#include "Bit.h"

class BitArray {
public:

	/**
	* kontruktor, tworzy tablice charow o zadanej długości count oraz ustawia zadana wartość value
	*/ 
	BitArray(const int & count, const bool & value = false);
	
	/**
	* desktruktor usuwajacy tablice 
	*/
	~BitArray();

	/**
	* metoda wypisujaca elementy 
	*/
	void print() const;

	/**
	* przeladowanie operatora [] zwracajacego obiekt z wartoscia z zadanej pozycji
	* bita w indeksie
	*/
	Bit operator[](const int & position) const;


private:

	/**
	* tablica charow
	*/
	unsigned char * _bits;

	/**
	* wartosc wielkosci tablicy, ilosc w bitach
	*/
	int _size;

};
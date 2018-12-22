#pragma once

class Bit {
public:

	/**
	* kontruktor tworzacy obiekt, ktory zawiera numer pozycji w indeksie tablicy - position,
	* oraz wskaznik do indeksu tablicy z BitArray *bitArray
	*/
	Bit(const int & position, unsigned char * bitArray);

	/**
	* przeladowanie operatora = przypisujacy zadana wartosc do bitu w zadanej kolejnosci value
	*/
	void operator = (const bool & value);

	/**
	* zwraca wartosc danego bitu
	*/
	operator bool() const;

private:

	/**
	* wskaznik do danego indeksu w tablicy
	*/
	unsigned char * _bitArray;

	/**
	* numer pozycji w indeksie tablicy
	*/
	int _positionInCell;

};
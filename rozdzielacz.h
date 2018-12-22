#pragma once

#include <stdio.h>
#include <string.h>


/*deklaracja struktury przetrzymujacej wskaznik na poczatek stringu,koniec
separator to char rozdzielajacy, chpocz to chwilowy poczatek,chkon chwilowy
koniec
*/
typedef struct Rozdzielacz {
	const char* poczatek;
	const char *koniec;
	char separator;
	const char *chpocz;
	const char *chkon;

}Rozdzielacz;


/*
funkcja skonstruuj przypisuje wartosci do struktury:tekst oraz element rozdzielajacy.
tworzy oraz zwraca tę strukture 
*/
struct Rozdzielacz skonstruuj(const char *tekst, char chaar);


//funkcja zwracajaca true or false, w zaleznosci od tego czy wystepuje nastepne slowo
bool nastepny(Rozdzielacz *ptr);


//funkcja wypisujaca zawartosc struktury
void wypisz( const Rozdzielacz *ptr);


//funkcja kopiujaca tekst do buffora
void kopiuj(Rozdzielacz *ptr, char *buffor);
 

//funkcje przechodza po tekscie do kolejnych slow, przyjmuje tekst oraz wskaznik do struktury
const char *nextkon(const char *tekst,Rozdzielacz *ptr);

const char *nextnotkon(const char *tekst,Rozdzielacz *ptr);


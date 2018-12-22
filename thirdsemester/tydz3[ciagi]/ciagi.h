#pragma once

#include<stdlib.h>
#include<stdio.h> 

typedef float TypWrazowCiagu ;
typedef int DlugoscCiagu ;
typedef float TypWrazowCiagu ;
typedef float* Ciag;
typedef float(*Funkcja)(float*, int) ; 


//funkcja tworzy ciag, a nastepnie zwraca wstaznik do niego
float* utworzCiag( float pierwszy, int rozmiar, float iloraz);

//funkcja nic nie zwracajaca, wypisujaca ciag
void wypiszCiag( float *tablica, int rozmiar);

//funkcja obliczajaca sume ciagu, zwracajaca wartosc sumy
float sumaLiczb(float *tablica, int rozmiar);

//funkcja obliczajaca iloczyn ciagu, zwracajaca wartosc iloczynu
float iloczynLiczb(float *tablica, int rozmiar);

//funkcja obliczajaca maximum danego ciagu, zwracajaca tę wartosc
float maximumLiczb(float *tablica,int rozmiar);

//funkcja obliczajaca minimum ciagu, zwracajaca te wartosc 
float minimumLiczb(float *tablica,int rozmiar);

//funkcja wykonywująca obliczenia na ciagach w zaleznosci od zadanej funkcji
void wykonajIWypisz(Funkcja p, float*tablica,int rozmiar);

//funkcja zwracajaca znak w zaleznosci czy sa wartosci ujemne, badz nie
char znakCiagu( float *tablica, int rozmiar );

//funkcja usuwajaca pamiec ciagu
void zniszczCiag(const Ciag *ciagg);






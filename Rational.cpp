#include "Rational.h"
#include <iostream>
#include <cmath>

Rational::Rational(int licznik,int mianownik): licznikk( licznik ), mianownikk( mianownik ) {
    if(mianownikk == -1 ){
        licznikk *= -1;
        mianownikk *= -1;
    }
    NWD();
}


Rational::~Rational(){}


Rational Rational::operator + (const Rational& toadd)const{
    return Rational( licznikk * toadd.mianownikk + toadd.licznikk * mianownikk,
    mianownikk * toadd.mianownikk );
}


Rational Rational::operator - (const Rational& tominus)const{
    return *this + ( -tominus );
}


Rational Rational::operator - ()const{
    return Rational( -licznikk, mianownikk );
}

Rational Rational::operator * (const Rational& tomultiply)const{
    return Rational( licznikk * tomultiply.licznikk,
            mianownikk * tomultiply.mianownikk );
}
    
void Rational::Print()const{
   if ( mianownikk > 1)
   std::cout << licznikk << "/" << mianownikk << "\n";
   
   else if ( mianownikk == 1 )
        std::cout << licznikk << "\n";
   
    else 
        std::cout << -licznikk << "/" << -mianownikk << "\n";
}


Rational::operator double(){
    return (double)licznikk / (double)mianownikk;
}

void Rational::NWD(){
    int a = abs(licznikk);
    int b = abs(mianownikk);
    
    while( a != b )
       if(a>b)
           a -= b; 
       else
           b -= a;

    
    licznikk /= a;
    mianownikk /= a;
}
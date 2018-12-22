#include "Complex.hxx"


Complex::Complex(double a, double b): re( a ), im( b ) {}
   

Complex::Complex(const Complex& a): re( a.re ), im( a.im ) {}
    

Complex::operator double(){
    return re;
}


int Complex::Im()const{
    return im;
}


void Complex::Print()const{
    if( im != 0 )
    std::cout << re << "+" << im << "i" << "\n";
    else
       std::cout << re << "\n";
}

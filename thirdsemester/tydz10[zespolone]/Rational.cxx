#include "Rational.hxx"


Rational::Rational(double a,double b) : licz( a ), mian( b ) {}


void Rational::Print()const{
    std::cout << licz << "/" << mian << "\n";
}
Rational::operator Complex(){
    Complex obj(0,0);
    obj.re = (double)licz / (double)mian;
    return obj;
}

#include "Fun.hxx"
#include <cmath>
#include <iostream>


double Fun::Modulo(const Complex& a){
    return sqrt( a.re * a.re + a.im * a.im );
}


Complex Fun::Add(const Complex& a,const Complex& b){
    Complex tmp( a.re + b.re, a.im );
    return tmp;
}


Complex Fun::Multiply(const Complex a,const Complex& b){
    return Complex(a.re * b.re - a.im * b.im, a.re * b.im + a.im * b.re );
}
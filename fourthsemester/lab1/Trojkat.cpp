 #include "Trojkat.h"
#include <math.h>
 
 Trojkat::Trojkat(int aa ,int bb, int cc) : a(aa),b(bb),c(cc) {}

    void Trojkat::wypisz(std::ostream &ostrm) const{
         ostrm << "trojkat o wymiarach: "<< a <<" "<< b <<" "<< c <<" "<<"\n";

    }

    double Trojkat::polePow()const{
        
        double x = (a + b + c)/2.0;

        return sqrt( x*(x-a)*(x-b)*(x-c) );
    }

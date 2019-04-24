#include "Kolo.h"



Kolo::Kolo(int licz){
    promien = licz ;
}

    void Kolo::wypisz(std::ostream &ostrm) const{
        ostrm << "kolo o promieniu: "<< promien<<"\n";
    }

    double Kolo::polePow(void)const{
        return 3.1415 * promien * promien;
    }
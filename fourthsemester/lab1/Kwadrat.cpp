#include "Kwadrat.h"


 Kwadrat::Kwadrat(int licz){
     bok = licz;
 }

    void Kwadrat::wypisz(std::ostream &ostrm) const{
      ostrm << "kwadrat o boku: "<<bok<<"\n";
 }

    double Kwadrat::polePow()const{
        return bok * bok;
 }

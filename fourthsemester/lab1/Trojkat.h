#pragma once

#include "Ksztalt.h"

class Trojkat : public Ksztalt{

public:

    Trojkat(int aa,int bb, int cc);

    void wypisz(std::ostream &ostrm) const;

    double polePow(void)const;

private:

    double a , b,  c;

};
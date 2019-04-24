#pragma once

#include "Ksztalt.h"

class Kolo : public Ksztalt{

public:

    Kolo(int licz);

    void wypisz(std::ostream &ostrm) const;

    double polePow(void)const;

private:

    double promien;

};
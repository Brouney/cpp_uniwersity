#pragma once

#include "Ksztalt.h"

class Kwadrat : public Ksztalt{

public:

    Kwadrat(int licz);

    void wypisz(std::ostream &ostrm) const;

    double polePow(void)const;

private:

    int bok;

};
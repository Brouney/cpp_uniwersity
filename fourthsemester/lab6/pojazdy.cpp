#include "Pojazdy.h"

std::ostream &operator<<(std::ostream &ostr, const Pojazd &poj)
{
    ostr << poj.nazwaa();
    return ostr;
}

PredkoscMaksymalna::PredkoscMaksymalna(int a) : predkoscmax(a) {}

std::ostream &operator<<(std::ostream &ostr, const PredkoscMaksymalna &poj)
{
    ostr << " ";
    return ostr;
}

Samochod::Samochod() {}

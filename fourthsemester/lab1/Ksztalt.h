#pragma once
#include <ostream>

class Ksztalt{

public:

   // Ksztalt();

    virtual ~Ksztalt() {}

    virtual void wypisz(std::ostream &ostr) const = 0;

    virtual double polePow() const =0;

   static void wypisz(const Ksztalt &ksz);

};

//void wypisz(const Ksztalt &ksz);
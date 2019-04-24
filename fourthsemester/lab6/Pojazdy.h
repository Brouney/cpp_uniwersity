#pragma once
#include <iostream>
#include <string>

class PredkoscMaksymalna
{
public:
    PredkoscMaksymalna() {}
    PredkoscMaksymalna(int a);
    int predkoscMaksymalna() const { return predkoscmax; }

private:
    int predkoscmax;
};

class Pojazd
{

public:
    Pojazd() = default;
    virtual ~Pojazd() = default;

    virtual std::string nazwaa() const = 0;

protected:
    std::string name;
};



class PojazdLadowy : virtual public Pojazd
{

public:
    PojazdLadowy() {}
    ~PojazdLadowy() {}

protected:
};

class PojazdWodny : virtual public Pojazd
{

public:
    PojazdWodny() {}
    virtual ~PojazdWodny() {}

protected:
};

class Samochod : virtual public PojazdLadowy
{

public:
    Samochod();
    Samochod(PredkoscMaksymalna pred) : prekosc(pred) {}
    int predkoscMaksymalna() const { return prekosc.predkoscMaksymalna(); }
    std::string nazwaa() const override { return "samochod"; }

protected:
    PredkoscMaksymalna prekosc;
};

class Motorowka : virtual public PojazdWodny
{

public:
    Motorowka() {}
    Motorowka(PredkoscMaksymalna pred) : prekosc(pred) {}
    int predkoscMaksymalna() const { return prekosc.predkoscMaksymalna(); }
    std::string nazwaa() const override { return "motorowka"; }

protected:
    PredkoscMaksymalna prekosc;
};

class Amfibia : virtual public Samochod, virtual public Motorowka
{
public:
    Amfibia() {}
    Amfibia(PredkoscMaksymalna pred1, PredkoscMaksymalna pred2) : Samochod(pred1), Motorowka(pred2) {}
    int predkoscMaksymalna_Lad() const { return Samochod::predkoscMaksymalna(); }
    int predkoscMaksymalna_Woda() const { return Motorowka::predkoscMaksymalna(); }
    std::string nazwaa() const override { return "Amfibia"; }

protected:
};

class Rower : virtual public PojazdLadowy
{
public:
    Rower() {}
    std::string nazwaa() const override { return "rower"; }

protected:
};

std::ostream &operator<<(std::ostream &ostr, const Pojazd &poj);

std::ostream &operator<<(std::ostream &ostr, const PredkoscMaksymalna &poj);
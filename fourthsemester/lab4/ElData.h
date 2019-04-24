#ifndef ELData_h
#define ELData_h

#include "Visitor.h"
#include "Data.h"

// wizytowalny konetener na liczbe typu int,dziedziczaca po klasie Data
class IntData : public Data {
public:
  // kontruktor przypisujacy wartosc przekazana d do m_d
  IntData( int d ) : m_d( d ) {}

  // przeladowanie operatora << zmieniajace zawartosc kontenera
  void operator << ( int d ) { 
    m_d = d; 
  }

  // metoda zwracajaca wartosc typu int
  int getInt() const { 
    return m_d; 
  }
  
  // metoda wywolujaca wizyte
  void acceptVisitor( Visitor& v) { 
    v.visit( this ); 
  }
private:
  // wartosc typu int 
  int m_d;
};

// wizytowalny konetener na liczbe typu float,,dziedziczaca po klasie Data
class FloatData : public Data {
public:
  // kontruktor przypisujacy wartosc przekazana d do m_d
  FloatData( float d ) : m_d( d ) {}

  // przeladowanie operatora << zmieniajace zawartosc kontenera
  void operator << ( float d ) {
    m_d = d; 
  }

  // metoda zwracajaca wartosc typu float
  float getFloat() const { 
    return m_d; 
  }

   // metoda wywolujaca wizyte
  void acceptVisitor( Visitor& v) { 
    v.visit( this ); 
  }
private:
  // wartosc typu float
  float m_d; 
};

#endif

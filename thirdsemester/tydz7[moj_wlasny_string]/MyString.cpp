#include "MyString.h"
#include <iostream>


MyString::MyString(const char* znak){
    dlugosc = strlen( znak );
    
    nazwa = new char[ dlugosc + 1 ];
    strcpy( nazwa, znak );
    
    std::cout << " +++ Create : " << nazwa << "\n" ;
}


char * MyString::c_str()const {
    return nazwa;
}


MyString::~MyString(){
    std::cout << " --- Delete : " << nazwa << '\n' ;
    delete [] nazwa;
}


int MyString::length()const{
    return dlugosc;
}


void MyString::append( const MyString & second ){
    dlugosc = dlugosc + second.dlugosc + 1;

    char *tab = new char [ dlugosc + 1 ];
    strcpy( tab, nazwa );
    
    delete[] nazwa;
    nazwa = new char [ dlugosc ];
   
    strcpy( nazwa, tab );
    strcat( nazwa, second.nazwa );

    delete[] tab;
}


void MyString::swap( MyString & second ){    
    char *tab=new char[dlugosc + 1];
    strcpy(tab,nazwa);

    delete [] nazwa;
    nazwa = new char [second.dlugosc + 1 ];
    strcpy( nazwa, second.nazwa );

    delete [] second.nazwa;
    second.nazwa = new char [ dlugosc + 1 ];
    strcpy( second.nazwa, tab );

    std::swap( second.dlugosc, dlugosc );

    delete [] tab;
}


void MyString::replace( const char* znaki ){
    int lengthh = strlen( znaki ) + 1;
   
    delete[] nazwa;
    dlugosc = lengthh;
    nazwa = new char [ lengthh + 1 ];
   
    strcpy( nazwa, znaki );
}

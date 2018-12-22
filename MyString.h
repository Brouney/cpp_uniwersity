#pragma once

#include <cstring>


class MyString{

public:

   //konstruktor kontruujacy obiekt oraz zapisujacy do niego dane
   MyString(const char* znaki);


   //destruktor zwalniajacy zalokowana pamiec
    ~MyString();
    

   //metoda zwracajaca zawartosc stringu nazwa
   char* c_str()const;
   

   //metoda zwracajaca dlugosc stringu nazwa
    int length() const;
   

   //metoda, rozszerza nazwe o dany string z przekazanego obiektu second
    void append(const MyString & second);
   

   //metoda, zamienia pola nazwa obiektu z podanym drugim obiektem second
    void swap(MyString & second);
   

   //metoda, zamienia string w obiekcie na podany
    void replace(const char* znaki);


private:
	
	//dane zawierajace dlugosc stringu nazwa
    int dlugosc; 
    
    //dane zawierajace string
	char* nazwa;  
    
};

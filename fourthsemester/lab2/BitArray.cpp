
#include "BitArray.h"
#include "Bit.h"
#include <iostream>
#include <cmath>
#include <cstring>
void BitArray::print()const{
    
    for(int i = dlg-1;i>=0; i--){    
        std::cout<< (*this)[i];
        if(i%8==0) 
            std::cout<<"<-" << i << " ";
    }
}

BitArray::BitArray( int number,bool val){
    int liczba = ceil(number / 8.0);
    BITS = new unsigned char [liczba];
    dlg = number;
    for(int i = 0;i<number; i++){    
        (*this)[i]=val;
    }
}

BitArray::~BitArray(){
   delete [] BITS;
}

Bit BitArray::operator [] ( int pos)const{
   int  pozycjawtab = pos/8;
    int pozycjawkomor = pos%8;
    return Bit(pozycjawkomor, BITS + pozycjawtab );
}

void BitArray::operator = (const BitArray & tab){
    delete [] BITS;
    int liczba = ceil(tab.dlg / 8.0);
    BITS = new unsigned char [liczba];
    memcpy(BITS, tab.BITS, liczba);

}
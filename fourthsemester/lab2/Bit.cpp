 #include "Bit.h"
 #include "BitArray.h"
 #include <iostream>
 
 
 
Bit::Bit(const int dlg , unsigned char *position ):   BIITS(position) ,positionincell(dlg){}



Bit::operator bool()const{
    return (*BIITS & (1<<positionincell)) != 0;
}

void Bit::operator = (const bool value)const{
    
    if ( value == false){
        *BIITS &= ~(1 << positionincell);
    }
    if( value == true ){
        *BIITS |= (1 << positionincell);
    }

}
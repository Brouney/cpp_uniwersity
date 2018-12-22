#include "rozdzielacz.h"



struct Rozdzielacz skonstruuj(const char *tekst, char chaar){
        
        Rozdzielacz nowy;
        nowy.poczatek=tekst;
        nowy.koniec=tekst+strlen(tekst);
        nowy.separator=chaar;
        nowy.chpocz=tekst;
        nowy.chkon=tekst;

return  nowy;
}


bool nastepny(Rozdzielacz *ptr){
   	ptr->chpocz = nextkon(ptr->chkon,ptr);
	ptr->chkon  = nextnotkon(ptr->chpocz,ptr);
    
    if(*ptr->chpocz == *ptr->koniec){
        return false;
    }
    else
        return true;
}


const char *nextkon(const char *tekst,Rozdzielacz *ptr){
	int i = 0;
    for(i=0;tekst[i]!='\0' && tekst[i]==ptr->separator;i++);
    
return tekst+i;
}


const char *nextnotkon(const char *tekst,Rozdzielacz *ptr){
   	int i = 0;
	for( i = 0; tekst[i] != '\0' && tekst[i] != ptr->separator; i++ );
    
return tekst+i;

}


void wypisz( const Rozdzielacz *ptr){
    const char *tekst = ptr->poczatek;
    int i = 0;
    for( i = 0; i < (ptr->koniec - ptr->poczatek ); i++){
       printf("%c",tekst[i]);
    }
    printf("\n");

}


void kopiuj(Rozdzielacz *ptr, char *buffor){
    int name=ptr->chkon - ptr->chpocz;
    strncpy( buffor, ptr->chpocz, name);

    buffor[name] = '\0';

}



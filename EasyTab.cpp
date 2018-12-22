#include "EasyTab.h"
#include <iostream>


EasyTab::EasyTab(const int begin,const int end){
    e_pocz = begin;
    e_kon = end;
    e_size = end-begin;
    
    tab = new double[ e_size ];
}


EasyTab::EasyTab(EasyTab & copied){
        
    e_kon = copied.e_kon;
    e_pocz = copied.e_pocz;
    e_size = e_kon-e_pocz;
        
    tab = new double [ e_size ];
    int i = 0;
        
    for( ; i < e_size ; i++ ){
        tab[i] = copied.gettab(i);
    }
}


EasyTab::EasyTab(const EasyTab& copied,const int begin,const int end){
        
    e_kon = end;
    e_pocz = begin;
    e_size = e_kon - e_pocz;
        
    tab = new double [ e_size ];
        
    int i = 0;
    int val = begin - copied.e_pocz;
        
    for( ; i < e_size; i++ ){
        tab[i] = copied.gettab(i+val);
    }
}


EasyTab::~EasyTab(){
    delete [] tab;
}


void EasyTab::setAll(double value){
    int i=0;
    for( ; i < e_size; i++ ){
        tab[i] = value;
    }
}


double & EasyTab::at(int value){
    return tab[ value - e_pocz ];
}


double & EasyTab::at(int value)const{
    return tab [ value - e_pocz ];
}


void EasyTab::print(const EasyTab & object){
        
    int i = 0;
    int val = object.e_pocz;
        
    for( ; i < object.e_size; i++ ){
        std::cout << val++ << ":" << object.gettab(i) << " ";
    }
}


int EasyTab::getpocz()const{
    return e_pocz; 
}


int EasyTab::getkon()const{
    return e_kon;
}


bool EasyTab::inRange(int val)const{
   return (val >=e_pocz && val < e_kon);
}


int EasyTab::getsize(){
    return e_size;
}


double EasyTab::gettab(int value)const{
    return tab[ value ];
}



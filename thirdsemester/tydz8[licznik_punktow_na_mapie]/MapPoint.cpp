#include <cmath>
#include <iostream>
#include "MapPoint.h"


int MapPoint::point=0;

MapPoint::MapPoint(const double lat,const double lon){
    latitude = lat;
    longitude = lon;
    point++;
    
    std::cout << "Num of points = " << point << ", current Point (";
    wypisz();
}


MapPoint::~MapPoint(){
    point--;
    std::cout << "Num of points = " << point << "\n";
}


void MapPoint::print() const{
    std::cout << "Point (";
    wypisz();
}


void MapPoint::move(const double lat,const double lon){
    longitude += lat;
    longitude += lon;
}

    
MapPoint& MapPoint::furtherFrom( MapPoint &first, MapPoint &seccond)const {
    
    double d1= sqrt(( latitude - first.latitude ) * ( latitude - first.latitude ) +
    ( longitude - first.longitude ) * ( longitude - first.longitude ));
    
    double d2= sqrt(( latitude - seccond.latitude ) * ( latitude - seccond.latitude ) +
    ( longitude - seccond.longitude ) * ( longitude - seccond.longitude ));

    return ( d1 > d2 ) ? first : seccond;

}


MapPoint MapPoint::inTheMiddle(const MapPoint &first,const MapPoint &seccond){
       return MapPoint(( first.latitude + seccond.latitude ) / 2,( first.longitude + seccond.longitude ) / 2 );
}


void MapPoint::wypisz()const{

    if( latitude > 0 )
        std::cout << latitude << "N, ";

    else   
        std::cout << -latitude << "S, ";

    if( longitude > 0 )
       std::cout << longitude << "E)" << "\n";

    else
        std::cout << -longitude << "W)" << "\n";
}


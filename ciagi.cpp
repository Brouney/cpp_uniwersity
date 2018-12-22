#include "ciagi.h"


float* utworzCiag( float pierwszy, int rozmiar, float iloraz){
	float* tablica = (float*)malloc(sizeof(float)*rozmiar);
	tablica[0] = pierwszy;
	int i = 0;
	for( i = 1 ; i < rozmiar; i++ ){
		tablica[i] = pierwszy *= iloraz;
	}
	return tablica; 
}


void wypiszCiag( float *tablica, int rozmiar){
	int i = 0;	
	for( i = 0 ; i < rozmiar; i++ ){
	printf( "\t %.0f", tablica[i]);
	}
	printf("\n");
}


float sumaLiczb(float *tablica, int rozmiar){
	float suma = 0;
	int i = 0;
	for( i = 0 ; i < rozmiar; i++ ){
		suma+=tablica[i];
	}
return suma;
}


float iloczynLiczb(float *tablica, int rozmiar){
	float iloczyn = 1;
	int i = 0;
	for( i = 0; i < rozmiar; i++ ){
		iloczyn *= tablica[i];
	}
return iloczyn;
}


float maximumLiczb(float *tablica, int rozmiar){
	float max = tablica[0];
	int i = 0;
	for( i = 1; i < rozmiar; i++ ){
		if( max < tablica[i] ){
			max = tablica[i];
		}
	}
return max;
}


float minimumLiczb(float *tablica,int rozmiar){
	float min = tablica[0];
	int i = 0;
	for( i = 1; i < rozmiar; i++ ){
		if( min > tablica[i] ){
			min = tablica[i];
		}
	}
return min;
}


void wykonajIWypisz(Funkcja p, float*tablica, int rozmiar){
	static int liczba = 0;
	switch( liczba ){
		
        case 0:
			printf(" suma=");
		break;	

		case 1:
			printf(" iloczyn=");
		break;

		case 2:
			printf(" max=");
		break;

		case 3:
			printf(" suma=");
		break;
	}

	printf( "%.0f", (p)( tablica, rozmiar ) );
	printf("\n");
	liczba++;
}


char znakCiagu( float *tablica, int rozmiar ){
	int i = 0;
	for( i = 0; i < rozmiar; i++){
		if( tablica[i] < 0 ){
		return '-';
		}
	}
    return '+';
}

void zniszczCiag(const Ciag *ciagg){
	free( *ciagg );
}

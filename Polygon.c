//Napisz strukturę Polygon przechowującą liczbę kątów oraz długość boku wielokąta foremnego. Zaimplementuj:
//1. Funkcję area, która przyjmuje stały adres wielokąta i zwraca jego pole.
//2. Funkcję scaled, która przyjmuje stały adres wielokąta oraz skalę jednokładności i zwraca wielokąt
//przekształcony przez tę jednokładność.
//3. Funkcję scale, która przyjmuje adres wielokąta oraz skalę jednokładności i przekształca podany
//wielokąt przez tę jednokładność.
//Struktura i funkcje powinny być przystosowane do użycia w przykładowym programie poniżej. Funkcje
//korzystają wyłącznie z nagłówka math.h. Jako rozwiązanie prześlij tylko strukturę i funkcje, bez dyrektyw
//include ani programu głównego.

#include <stdio.h>

struct Polygon
{
	int number;
	double lenght
};






int main() {
	struct Polygon polygon1 = {7, 10.};
	printf("%lg\n", area(&polygon1));
	struct Polygon polygon2 = scaled(&polygon1, 2.);
	printf("%lg\n", area(&polygon2));
	scale(&polygon1, 2.);
	printf("%lg\n", area(&polygon1));
return 0; }
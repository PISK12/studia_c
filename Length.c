/*
Napisz funkcję length, która przyjmuje napis i zwraca jego długość, czyli liczbę znaków poprzedzają-
cych bajt zerowy. Funkcja nie używa żadnych zmiennych całkowitych, a jedynie wskaźników. Funkcja
nie korzysta z żadnych nagłówków. Używając tej funkcji napisz program length, który przyjmuje jako
argument wywołania jedno słowo i wypisuje na standardowe wyjście jego długość.
Przykładowe wykonanie
Linux: ./length konstantynopolitanczykowianeczka
Windows: length.exe konstantynopolitanczykowianeczka
Out: 32
*/
#include <stdio.h>

int length(char t[]){
	char *pointer;
	for (pointer=t;*pointer;++pointer) {}
	return pointer-t;
}

int main(int argc,char *argv[]){
	printf("%i\n",length(argv[1]) );
	return 0;
}
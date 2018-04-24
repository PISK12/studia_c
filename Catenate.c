/*
8.2.11 Catenate: Łączenie napisów
Napisz funkcję catenate, która przyjmuje dwa napisy dowolnej długości, tworzy trzeci będący ich połą-
czeniem alokując dla niego jak najmniej pamięci i zwraca jego adres. Funkcja powinna być przystosowana
do użycia w przykładowym programie poniżej. Funkcja korzysta wyłącznie z nagłówka stdlib.h. Jako
rozwiązanie prześlij samą funkcję catenate, bez dyrektyw include ani funkcji main.
Przykładowy program
int main() {
char *string = catenate("to samo", "lot do Londynu");
printf("%s\n", string);
free(string);
return 0; }
Wykonanie
Out: to samolot do Londynu
*/

#include <stdlib.h>

int length(char t[]){
	char *pointer;
	for (pointer=t;*pointer;++pointer) {}
	return pointer-t;
}

char* catenate( char s1[],  char s2[]){
    char *result = malloc(length(s1)+length(s2)+1);//+1 for the null-terminator
    return result;
}


int main() {
	char *string = catenate("to samo", "lot do Londynu");
	printf("%s\n", string);
	free(string);
return 0; 
}
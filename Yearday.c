//Korzystając ze struktury tm oraz funkcji z nagłówka time.h napisz program yearday, który wczytuje
//ze standardowego wejścia datę w formacie yyyy mm dd i wypisuje na standardowe wyjście numer odpowiadającego
//jej dnia w roku licząc od jednego dla pierwszego stycznia. Program używa tylko nagłówków
//stdio.h i time.h.



#include <stdio.h>      
#include <time.h>       

int main ()
{
  time_t rawtime;
  struct tm * timeinfo;
  int year, month ,day;

  scanf ("%d",&year);
  scanf ("%d",&month);
  scanf ("%d",&day);

  time ( &rawtime );
  timeinfo = localtime ( &rawtime );
  timeinfo->tm_year = year-1900;
  timeinfo->tm_mon = month - 1;
  timeinfo->tm_mday = day;

  mktime ( timeinfo );

  printf ("%i\n", timeinfo->tm_yday+1);
  printf ("%i ", timeinfo->tm_year);
  printf ("%i ", timeinfo->tm_mon);
  printf ("%i ", timeinfo->tm_mday);
  return 0;
}
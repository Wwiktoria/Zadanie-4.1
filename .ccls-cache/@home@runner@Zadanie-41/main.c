#include <stdio.h>

int main(void) {
  
  int ocena ;
  printf("Podaj ocenę");
    scanf("%i",&ocena);
  int suma = ocena;
  int licznik = 1;
  if (ocena!=-1)
  {
    do 
    {
      printf("Podaj ocenę");
      scanf("%i",&ocena);
      suma += ocena;
      licznik +=1;
    }
      while (ocena!=-1);
    
    
      double srednia = suma / (double)licznik;
      printf("Średnia z ocen wynosi: %.2f", srednia);
    }
  else
  {
    printf("Brak wystarczających danych by obliczyć średnią.");
    }
  return 0;
}
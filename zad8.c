//Napisz program, który wczytuje ze standardowego wejścia liczbę wymierną i wypisuje ją na standardowym wyjściu w notacji wykładniczej(czyli takiej, w której 0.2 to 2.0e-1)
#include <stdio.h>
int main(){
float aX;
printf ("Wpisz liczbe z przecinkiem: ");
scanf ("%f", &aX);
printf ("Liczba to: %.0e-1\n", aX);
return 0;
}

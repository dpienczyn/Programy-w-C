//Napisz program, który wczytuje ze standardowego wejścia liczbę wymierną i wypisuje ją na standardowym wyjściu z dokładnością do dwóch miejsc po przecinku
#include <stdio.h>
int main(){
float a;
printf ("Wprowadz liczbe: ");
scanf ("%f", &a);
printf ("Liczba to: %.2f\n", a);
return 0;
}

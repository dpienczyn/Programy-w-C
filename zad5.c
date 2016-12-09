//Napisz program, który wczytuje ze standardowego wejścia liczbę wymierną x i wypisuje na standardowym wyjściu wartość bezwzględną z x.
#include <stdio.h>
#include <math.h>
int main(){
int a;
int abs(int a);
printf ("Wpisz liczbe z przecinkiem: ");
scanf ("%d",&a);
printf ("Wartosc bezwzgledna z %d\n to %d",a, abs(a));
return 0;
}

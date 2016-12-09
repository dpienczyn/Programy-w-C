//Napisz program, który wczytuje ze standardowego wejścia dwie liczby całkowite i wypisuje tą o większej wartości bezwzględnej.
#include <stdio.h>
#include <math.h>
int main(){
int a, b;
printf ("Podaj liczbe a: ");
scanf ("%d", &a);
printf ("Podaj liczbe b: ");
scanf ("%d", &b);
if (a&&b<0)
a*=-1;
b*=-1;
printf ("wartosc bezwzgledna z liczb a i b to: %d , %d\n", a,b);
return 0;
}

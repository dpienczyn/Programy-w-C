//Napisz program, który wczytuje ze standardowego wejścia liczbę całkowitą n i wypisuje na standardowe wyjście wartość bezwzględną z n.
#include <stdio.h>
int main(){
int liczba;
printf ("Wprowadz liczbe: ");
scanf ("%d", &liczba);
if (liczba <0)
liczba*= -1;
printf ("|liczba|=%d\n", liczba);
return 0;
}


//Napisz program, który wczytuje ze standardowego wejścia trzy liczby całkowite i wypisuje na standardowym wyjściu największą z ich wartości (pamiętaj o przypadku gdy wszystkie podane liczby lub dwie z nich są równe).
#include <stdio.h>
int main(void){
int a,b,c;
printf ("Wprowadz dowolona liczbe a: ");
scanf ("%d", &a);
printf ("Wprowadz dowolona liczbe b: ");
scanf ("%d", &b);
printf ("Wprowadz dowolona liczbe c: ");
scanf ("%d", &c);
if (a<b<c){
printf ("Najwieksza liczba %d\n", c);
}
else if (a>b>c){
printf ("Najwieksza liczba to %d\n", a);
}
else if (a<b>c){
printf ("Najwieksza liczba to %d\n", b);
}
else if (a==b==c){
printf ("%d\n", a);
}
return 0;
} 

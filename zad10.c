//Napisz program, który wczytuje ze standardowego wejścia dwie liczby całkowite i wypisuje na standardowym wyjściu większą z nich (w przypadku gdy podane liczby są równe, program powinien wypisać którą kolwiek z nich)
#include <stdio.h>
int main(void){
int a, b;
printf ("Wprowadz liczbe a: ");
scanf ("%d", &a);
printf ("Wprowadz liczbe b: ");
scanf ("%d", &b);
if (a<b) {
printf ("Liczba a jest mniejsza od b\n");
} 
else if (a>b) {
printf ("Liczba a jest wieksza od b\n");
} 
else if (a==b){
printf ("%d\n",a);
}
return 0;
}

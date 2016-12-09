//Napisz program obliczający pole trójkąta na podstawie wymiarów podanych przez użytkownika. Użytkownik powinien mieć możliwość podania długości podstawy i wysokości lub wszystkich boków trójkąta
#include <stdio.h>
#include <math.h>
#define sqrt
int main(void){
int wybor;
double bok1,bok2,bok3,p,h,s;
printf ("Witam obliczam wzor na pole trojkata! Wpisz: ");
printf ("1-jesli chcesz podac dlugosc podstawy i wysokosci.\n");
printf ("2-jesli chcesz podac dlugosc trzech bokow.\n");
scanf ("%d", &wybor);
if (wybor==1){
printf ("Podaj dlugosc podstawy trojkata: ");
scanf("%lf", &bok1);
printf ("podaj wysokosc trojkata: ");
scanf ("%lf",&h);
p=bok1*h/2;
}
else{
printf ("Podaj dlugosc bok1: ");
scanf ("%lf", &bok1);
printf ("Podaj dlugosc bok2: ");
scanf ("%lf", &bok2); 
printf ("Podaj dlugosc bok3: ");
scanf ("%lf", &bok3);
s=(bok1+bok2+bok3)/2;
p=sqrt(s*(s-bok1)*(s-bok2)*(s-bok3));
}
printf("Pole trojkata o podanych wymiarach wynosi %lf\n",p);
return 0;
}

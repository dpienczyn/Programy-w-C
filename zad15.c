//Napisz program, który w zależności od wyboru użytkownika wczytuje ze standardowego wejścia wymiary: kwadratu, prostokąkąta lub trojkata i wypisuje na standardowym wyjściu pole figury o wczytanych wymiarach
#include<stdio.h>
int main(){
double a,b,h,p;
int i;
printf ("Wybierz: ");
printf ("1 - Pole kwadratu ");
printf ("2 - Pole trojkata ");
printf ("3 - Pole prostokata ");
scanf ("%d", &i);
switch(i){
case 1: printf("Podaj dlugos boku a: ");
	scanf ("%lf", &a);
	p=a*a;
	break;
case 2: printf ("Podaj dlugosc bokow a i b: ");
	scanf ("%lf %lf", &a, &b);
	p=a*b;
	break;
case 3: printf ("Podaj dlugosc boku a i h: ");
	scanf ("%lf %lf", &a, &h);
	p=0.5*a*h;
}
printf ("Pole figury o podanych wymiarach wynosi %.2f\n",p);
return 0;
} 


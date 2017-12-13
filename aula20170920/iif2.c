#include<stdio.h>
#include<stdlib.h>
int main()
{
int x, j;
float finverte, somaf = 0;
double dinverte, somad = 0;
printf("Digite valor inteiro:\n ");
scanf("%d", &x);
finverte = 1.f/x;
dinverte = 1./x;
for(j = 0; j < 729 ; j++)
{
somaf += finverte;
somad += dinverte;
}
printf("Soma float: %.15f \nSoma double: %.15f", somaf,somad);
return 0;
}

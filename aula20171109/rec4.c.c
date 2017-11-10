#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int p1(double *vet1,double *vet2){
double vet3[20];
int i;
for(i=0; i<16; i++)
vet3[i]=sqrt(vet1[i]+vet2[i]);
printf("Resultado: ");
for(i=0; i<16; i++)
printf("%lf ",vet3[i]);
}
int p2(double *vet1,double *vet2){
double vet3[20];
int i;
for(i=0; i<16; i++)
vet3[i]=vet1[i]+3*vet2[i];
printf("Resultado: ");
for(i=0; i<16; i++)
printf("%lf ",vet3[i]);

}
int p3(double *vet1,double *vet2){


double vet3[20];
int i;
for(i=0; i<16; i++)
vet3[i]=(vet2[i]*vet2[i])/vet1[i];
printf("Resultado: ");
for(i=0; i<16; i++)
printf("%lf ",vet3[i]);

}
int main()
{
double (*ptr)(double,double);
double A[]= {1.0,3.0,5.0,7.0,9.0,11.0,13.0,15.0,17.0,19.0,21.0,23.0,25.0,27.0,29.0,31.0};
double B[]= {0.5,0.25,0.125,0.0625,0.5,0.25,0.125,0.0625,0.5,0.25,0.125,0.0625,0.5,0.25,0.125,0.0625};
int opr;
printf("****OPCOES****\n\n'1' sqtr(A+B) \n\n'2' A+3B \n\n'3' B^2/A \n");
scanf("%i",&opr);
switch(opr)
{
case 1:
ptr = &p1;
p1(A,B);
break;

case 2:
ptr=&p2;
p2(A,B);
break;

case 3:
ptr = &p3;
p3(A,B);
break;
}
return 0;
}

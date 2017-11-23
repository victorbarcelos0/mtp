#include <stdio.h>
#include "matriz.h"



int main ()
{
Matriz a, b, c;
int m;
printf("\nDigite a matriz: \n");
scanf("%d",&m);
printf("\nPreenche a matriz: \n");
A=criarMatriz(m,m);
CertifiedMatriz(a);
printf ("\nPreenche a outra matriz: \n");
b=criarMatriz (m,1);
ComplerMatriz(b);
c=inversa(a);
printf("\nIncognitas: \n");
imprimirMatriz (multiplicaMat(c,b));
destruirMatriz (a);
destruirMatriz (b);
destruirMatriz (c);
return  0 ;
}

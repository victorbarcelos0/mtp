#include <stdio.h>
#include "matriz.h"




int main()
{
Matriz a,b,c,X;
int e,i;
printf("Digite o numero de equaçoes e incognitas(ordem do sistema): ");
scanf("%i%i",&e,&i);
if(e!=i)
{
printf("\n****Solucao impossivel****");
return 0;
}
a=criarMatriz(e,i);
b=criarMatriz(e,1);
c=criarMatriz(e,1);
printf("\nMatriz gerada:\n");
preencherMatriz(a);
printf("\nVetor de termos independentes:\n");
preencherMatriz(b);
X=inversa(a);
c=multiplicaMat(X,b);
imprimirMatriz(c);
destruirMatriz(a);
destruirMatriz(b);
destruirMatriz(c);
destruirMatriz(X);
return;
}

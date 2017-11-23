#include<stdio.h>
#include "matriz.h"


int main()
{
Matriz a,b;
int ord;
printf("Entre com a ordem Matriz:\n\n");
scanf("%d",&ord);
A=criarMatriz(ord,ord);
preencherMatriz(a);
b=inversa(a);
if(vazia(b)==1)
printf("\nMatriz nao inversivel: ");
else
imprimirMatriz(b);
destruirMatriz(a);
destruirMatriz(b);
return 0;
}

#include <stdio.h> /* Programa que l� uma string e conta quantos dos caracteres desta s�o iguais a letra C */
int main ()
{
char string[100];
int i, cont;
printf("\n\nDigite uma frase: ");
gets(string); /* eu sei que n�o estou em um Unix e nem especifiquei o est�dio para usar gets, mas esse n�o � o caso */
printf("\n\nFrase digitada: \n%s", string);
cont = 0; /* essa parte n�o entendi */
for (i=0; string != '\0'; i=i+1) /* essa parte n�o entendi */
{
if (string == 'c') /* essa parte n�o entendi */
cont = cont +1; /* essa parte n�o entendi */
}
printf("\nNumero de caracteres c = %d", cont);
return (0);
}

#include <stdio.h> /* Programa que lê uma string e conta quantos dos caracteres desta são iguais a letra C */
int main ()
{
char string[100];
int i, cont;
printf("\n\nDigite uma frase: ");
gets(string); /* eu sei que não estou em um Unix e nem especifiquei o estúdio para usar gets, mas esse não é o caso */
printf("\n\nFrase digitada: \n%s", string);
cont = 0; /* essa parte não entendi */
for (i=0; string != '\0'; i=i+1) /* essa parte não entendi */
{
if (string == 'c') /* essa parte não entendi */
cont = cont +1; /* essa parte não entendi */
}
printf("\nNumero de caracteres c = %d", cont);
return (0);
}

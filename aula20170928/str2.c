#include <stdio.h>
#include <string.h>//necessário para strlen
#include <conio.h>
int main (void)
{
   char str[5] = " ";
   int tamanho;

   tamanho = strlen(str);

   printf("O tamanho da string %s vale %d\n", str, tamanho);

   getch();
   return 0;
}

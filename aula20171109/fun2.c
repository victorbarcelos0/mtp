#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
int divisao(int * resto, int * quoc, int x, int y)
{
*resto = x%y;
*quoc = x/y;
return 0;
}

int main()
{
int x,y,resto,quoc;
printf("Insira o dividendo e o divisor:\n");
scanf("%d %d", &x, &y);
divisao( &resto, &quoc, x, y);
printf("\nQuociente: %d  e  Resto: %d", quoc, resto);
return 0;
}

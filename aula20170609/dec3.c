#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
srand(time(NULL));
int x,y,w,s,op;
do
{
x = (rand()%6)+1;
y = (rand()%6)+1;
w = (rand()%6)+1;
s = x + y + w;
if(s == 7 || s == 11)
printf("\nOs numeros %d, %d e %d, gerados aleatoriamente, somados, resultam em %d.Voce ganhou!\n", x, y, w, s);
else
printf("\nOs numeros gerados foram: %d, %d e %d",x, y, w);
printf( "\nSomatorio dos numeros sao: %d.\nVoce perdeu.\n",s);
printf("\nDigite 1 para repetir.\n");
printf("\n para repetir.\n");
scanf("%d",&op);
}
while(op == 1);
return 0;
}

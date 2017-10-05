#include <stdio.h>
#include <stdlib.h>
int main()
{
int v[] = {0,1,2,4,8,16,1025};
int a,b,contad = 0;
a = sizeof(v);
unsigned char *prt;
prt = (unsigned char *)v;
for(b=0; b < a ; b++)
{
printf("\n %u\n", *(prt+b));
if(!prt[b])
contad++;
}
printf("\n\n\n O numero de dados armazenados com bytes somente com 0's sao: %i\n\n", contad);
}

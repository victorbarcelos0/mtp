#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{


srand(time(NULL));
int v[1000],a, b, c, contad = 0;
unsigned char *ptr;
ptr = (unsigned char *)v;
for(b = 0; b < 100; b++)
v[b] = rand()%RAND_MAX;
printf("\nDigite um valor (entre 0 e 255) :.\n");
scanf("%d", &a);
for(c = 0; c < sizeof(v); c++)
{
if(v[c]== a)
{
contad++;
printf("\n%p:%i\n ", &v[c], v[c]);
}
}
printf("\nA quantidade de bytes %i ,mostrado pelo usuario eh %i, iniciando em 0x%p ,e anterior ah 0x%p", a, sizeof(a), ptr, (ptr+999));
return 0;
}

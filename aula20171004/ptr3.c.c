#include <stdio.h>
#include <stdlib.h>
int main()
{
int v[] = {0x0F,0xFF,0xFFFF,0xFFFFFF,0x80000001,0xFFFFFFFF};
int a, b, contad = 0;
a = sizeof(v);
unsigned char *ptr;
ptr = (unsigned char *)v;
for(b=0; b<a; b++)
{
printf("\n%u", *(ptr + b));
if(ptr[b]!= 0)
contad++;
}
printf("\n\nOs dados armazenados com bytes somente com 1 sao : %i\n\n", contad);
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
unsigned int a = 0xFACA8421;
unsigned char *ptr;
ptr = (unsigned char *) &a;
for(i = 0; i < sizeof(ptr); i++)
{
printf("Endereco  %p\n\n",(ptr+i));
printf("Decimal %u\n\n",*(ptr+i));
}
}

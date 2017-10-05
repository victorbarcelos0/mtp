#include <stdio.h>
#include <stdlib.h>

int main()
{

int a;
char string[16];

for(a = 0; a < 16; a++)
{
string[a]= 0;
}
int *ptr;
printf("Digite uma Frase:\n");
fgets(string , 16, stdin);
ptr = (int *)string;
for(a=0; a<sizeof(string)/sizeof(int); a++)
{
printf("%d", *(ptr+a) );
}
printf("(HEXA)");
for(a = 0; a < sizeof(string) / sizeof(int); a++)
{
printf("%x",*(ptr+a));
}
}

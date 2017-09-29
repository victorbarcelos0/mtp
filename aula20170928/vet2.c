#include <stdio.h>
#include <string.h>

void main()
{
int i,ant;
char numero[50], buffer[50];

printf("Digite uma sequencia numerica:  ");
gets(numero);
ant = strlen(numero);

for(i=0; i<50; i++)
 { buffer[i] = '\0';}

for(i=0; i<ant; i++)
 { buffer[(ant - i - 1)] = numero[i]; }

printf("\ninverso da sequencia: %s\n", buffer);

}

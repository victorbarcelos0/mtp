#include <stdio.h>
#include <stdlib.h>


int main () {
char frase [256];
int i;
printf ("Entre com uma frase para gerar minuscula:\n");

fgets(frase, 256, stdin);
for(i = 0; frase[i]; i++)
frase[i] = tolower(frase[i]);
printf("%s", frase);
return EXIT_SUCCESS;

 }

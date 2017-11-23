#include <stdio.h>
#include <stdlib.h>

int main()
{
char *TEXTO,a,j;
printf("Digite o texto: ");
TEXTO=(char *)calloc(200,sizeof(char));
fflush(stdin);
gets(TEXTO);
for(j=0; TEXTO[j]!='\0'; j++);
for(a=0; a<=j; a++)
{
if(TEXTO[a]>='a'&&TEXTO[a]<='z')
TEXTO[a]-=32;
}
printf("\nTexto armazenado: %s\n",TEXTO);
free(TEXTO);
return 0;
}

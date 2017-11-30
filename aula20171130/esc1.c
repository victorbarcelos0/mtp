#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char * iniciaText();
char * recebeText();
void gravaText(char * texto, int tamanho);
int main() {

char * texto;
printf("              *Inicio*\n\n DIGITE A FRASE DESEJADA( tecle'@'+ 'enter' quando terminar)\n");
texto = recebeText();
printf("\nNa memoria\n");
printf("%s\n", texto);
printf("\nTamanho string: %d\n", strlen(texto));
gravaText(texto, strlen(texto));
free(texto);
return 0;
}
char * iniciaText() {
char * texto = (char*) malloc(sizeof(char));
texto[0] = '\0';
return texto;
}
char * recebeText() {
char * texto = iniciaText();
char * aux;
int c, tamanho = 0;
do
{
c = getchar();
if(c != '@')
{
aux = (char *) realloc(texto, tamanho+2);
if(aux != NULL)
{
texto = aux;
texto[tamanho] = c;
tamanho++;
texto[tamanho] = '\0';
}
else printf("\n** Erro! Sem memoria! **\n");
}
}
while(c != '@');
return texto;
}
void gravaText(char * texto, int tamanho)
{
FILE* arq;
int i;
arq= fopen("meutexto.txt", "a");
if (arq==NULL)
fprintf(stderr, "Erro na gravacao do arquivo");
else
{
for (i=0;i<tamanho;i++)
fputc(texto[i],arq);
fclose(arq);
}
}


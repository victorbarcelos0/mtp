#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char * iniciaText();
char * recebeText();
void gravaText(char * texto, int nchar);
char * leText();
int main() {
char * texto;
printf("              *Inicio*\n\n DIGITE A FRASE DESEJADA( tecle'@'+ 'enter' quando terminar)\n");
texto = recebeText();
printf("\nADEUS!!\n");
free(texto);
return 0;
}
char * iniciaText() {
char * texto = (char*) malloc(sizeof(char));
texto[0] = '\0';
return texto;
}
char * recebeText() {
char * texto = leText();
char * aux;
int c, tamanho = 0;
printf("%s", texto);
do
{
c = getchar();
if(c != '@') {
aux = (char *) realloc(texto, tamanho+2);
if(aux != NULL) {
texto = aux;
texto[tamanho] = c;
tamanho++;
texto[tamanho] = '\0';
}
else printf("\n** Erro! Sem memoria! **\n");
}
}
while(c != '@');
gravaText(texto, strlen(texto));
return texto;
}

void gravaText(char * texto, int nchar) {
FILE *arquivo;
int i;
arquivo = fopen("meutexto.txt","a");
if(arquivo == NULL)
fprintf(stderr, "Erro na criacao do arquivo!\n");
else
{
for(i = 0; i < nchar; i++)
fputc(texto[i], arquivo);
fclose(arquivo);
}
}

char * leText() {
FILE * arquivo;
char * texto = iniciaText();
char * aux;
int c, tamanho = 0;
arquivo = fopen("meutexto.txt","r");
if(arquivo == NULL)
return texto;
else
{
do
{
c = fgetc(arquivo);
if(c != EOF)
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
while(c != EOF);
fclose(arquivo);
return texto;
}
}

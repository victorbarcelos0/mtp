#include <stdio.h>
#include <string.h>

int main(){

char frase[26];

int i=0;
int chave=13;
system("clear");

printf("\nDigite uma frase: ");
scanf("%s",frase);

printf("\nCifra de cezar:  ");
for(i=0;i<strlen(frase);i++)
{
int enc=(int)frase[i]+chave;
printf("%c",(char)enc);
}

printf("\n\n");

}


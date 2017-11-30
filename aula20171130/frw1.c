#include <stdio.h>
#include <stdlib.h>
void preenche()
{
FILE *arq;
float ALTURA; char NOME[20]; int IDADE;
printf("\n NOME : \n");
scanf("%s", NOME);
printf("\n IDADE : \n");
scanf("%d", &IDADE);
printf("\n ALTURA (METROS) : \n");
scanf("%f", &ALTURA);
arq= fopen("info.txt", "w");
fprintf(arq, "%s\n %d\n %f\n",NOME,IDADE,ALTURA);
fclose(arq);
}
void imprimir()
{
FILE *arq;
char NOME[20]; int IDADE; float ALTURA;
arq = fopen("info.txt", "r");
fscanf(arq, "%s\n %d\n %f\n", NOME,&IDADE,&ALTURA);
fclose(arq);
fprintf(stdout, "\n NOME: %s\n IDADE : %d\n ALTURA : %f metros \n", NOME, IDADE, ALTURA);
}
int main ()
{
int k=0; char menu;
while(k==0)
{
printf("          *DIGITE*\n\n1-'a' PARA PREENCHER OS DADOS\n2-'s' PARA VER OS DADOS.txt\n3-'d' PARA SAIR \n");
scanf("%c", &menu);
switch (menu)
{
case 'a':
preenche();
break;
case 's':
imprimir();
break;
case 'd':
k++;
break;
}
}
return 0;
}

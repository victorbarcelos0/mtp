#include <stdio.h>
#include <string.h>
#define NCHAR 256
void gravar();
void ler();
int main()
{
int op;
do
{
printf("1- DIGITAR INFORMACOES\n");
printf("2- LER INFORMACOES\n");
printf("0- SAIR\n");
scanf("%d", &op);
getchar();
if (op==1)
gravar();
if (op==2)
ler();
}
while(op);
return 0;
}
void gravar () {
FILE * arquivo;
char nome [NCHAR];
int idade;
float altura;
printf("DIGITE UM NOME: ");
fflush(stdin);
fgets(nome, NCHAR, stdin);
nome [strlen(nome)-1]='\0';
printf("DIGITE UMA IDADE: ");
fscanf(stdin, "%d", &idade);
printf("DIGITE UMA ALTURA: ");
fscanf(stdin, "%f", &altura);
arquivo=fopen("info.txt", "w");
if(arquivo==NULL)
fprintf(stderr, "ERRO\n");
else
{
fprintf(arquivo, "%s\n%d\n%g\n",nome, idade, altura);
fclose(arquivo);
}
}
void ler () {
FILE * arquivo;
char nome [NCHAR];
int idade;
float altura;
arquivo=fopen("info.txt", "r");
if(arquivo==NULL)
fprintf(stderr, "NAO EXISTE!!\n");
else
{
fgets(nome, NCHAR, arquivo);
nome [strlen(nome)-1]='\0';
fscanf(arquivo, "%d\n%f\n", &idade, &altura);
fclose(arquivo);
printf("Nome: ");
fprintf(stdout, "%s\n",nome);
printf("Idade: ");
fprintf( stdout, "%d\n",idade);
printf("Altura: ");
fprintf(stdout,"%g\n",altura);
}
}


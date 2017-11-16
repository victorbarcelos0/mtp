#include <stdio.h>
#include <stdlib.h>

void inserir(float *mat)
{
scanf("%f",mat);
}
void transposta(float **mat ,int col,int lin){
int l,c;
printf("\nMatriz transposta: \n");
for(l=0; l<col; l++){
printf("\n");
for(c=0; c<lin; c++)
printf("%f ",mat[c][l]);
}
}

int main(){

int a,b,c,d;
float **matriz;
printf("Coloque a ordem da matriz desejada: ");
scanf("%i%i",&c,&d);
matriz=(float *)calloc(c,sizeof(float*));
for(a=0; a<c; a++){
matriz[a]=calloc(d,sizeof(float));
for(b=0; b<d; b++)
{
printf("\nColoque o elemento <%i %i>: ",a,b);
inserir(&matriz[a][b]);
}
}
transposta(matriz,c,d);
for(a=0; a<c; a++)
free(matriz[a]);
free(matriz);
return 0;
}

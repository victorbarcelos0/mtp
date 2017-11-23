#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float media( float *vetr,int quant){

int i;
float s=0;
for(i=0; i<quant; i++)
s+=vetr[i];
return s/quant;
}

float despad(float *vetr, int quant, float med)
{
int i;
float s=0;
for(i=0; i<quant; i++)
s+=(vetr[i]-med)*(vetr[i]-med);
return sqrt(s/quant);
}

int main(){

int n,i;
float *vetor,m,dp;
printf("Insira o numero de elementos: ");
scanf("%i",&n);
vetor=(float *)calloc(n,sizeof(float));
printf("\nInforme quais sao os elementos: ");
for(i=0; i<n; i++)
scanf("%f",&vetor[i]);
m=media(vetor,n);
dp=despad(vetor,n,m);
printf("\nA media sera: %f\n\nDesvio Padrao: %f\n",m,dp);
free(vetor);
return 0;
}

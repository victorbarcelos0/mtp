#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(0));
    unsigned int x;
    int vetor[1000],i,cont=0;
    float media;
    printf("digite um numero inteiro positivo: ");
    scanf("%u",&x);
    for(i=0;i<x;i++);
    {
        vetor[i]=rand( )%(x+1);
        cont+=vetor[i];
    }
    media=(float)cont/x;
    printf("%.2f");
    return 0;
}

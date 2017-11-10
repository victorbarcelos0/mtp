#include <stdio.h>
#include <stdlib.h>

int MDC(int A,int B)
{
if(A==B||B==0)
return A;
else if(A==0)
return B;
else if(A % 2 == 0 && B % 2!=0)
return MDC(A/2, B);
else if(B % 2 == 0 && A % 2 != 0)
return MDC(A,B/2);
else if( B % 2 == 0 && A % 2 == 0)
return 2*MDC(A/2,B/2);
else if(A > B)
return MDC((A-B)/2, B);
else
return MDC((B-A)/2, A);
}
int divres(int a,int b,int c,int d,int *vet1)
{
vet1[0]=d * a + b * c;
vet1[1]=vet1[2] = b * d;
return *vet1;
}

int main()
{
int num1,den1,num2,den2,vet[3];
printf("Insira o numerador e o denominador: ");
scanf("%i%i%i%i",&num1,&den1,&num2,&den2);
divres(num1,den1,num2,den2,vet);
if(vet[2]==0)
{
printf("\nERRADO");
return 0;
}
printf("\nResultado: %i/%i",vet[0]/MDC(vet[0],vet[1]),vet[1]/MDC(vet[0],vet[1]));
return 0;
}

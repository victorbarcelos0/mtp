#include <stdio.h>
#include <complex.h>
int main()
{
float x, y;
double complex c, resultado;
printf("Digite a parte real:\n");
scanf("%f",&x);
printf("Digite a parte imaginaria:\n");
scanf("%f",&y);
c= x + y * I;
resultado = (conj(c)*c);
printf("\n %lf + %lf*i",creal(resultado), cimag(resultado));
return 0;
}

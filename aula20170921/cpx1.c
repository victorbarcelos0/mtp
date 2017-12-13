#include <stdio.h>
#include <ctype.h>
#include <complex.h>
int main()
{
float x1, x2, y1, y2, xf=0, yf=0;
printf("Insira a parte real:\n");
scanf("%f",&x1);
printf("Insira a parte imaginaria:\n");
scanf("%f",&y1);
printf("Insira a parte real do segundo numero:\n");
scanf("%f",&x2);
printf("Insira a parte imaginaria do segundo numero:\n");
scanf("%f",&y2);
xf = x1+x2;
yf = y1+y2;
printf("\nNumero complexo: %.2f + %.2f i", xf, yf);
return 0;
}

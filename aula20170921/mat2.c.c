#include <stdio.h>
#include <stdlib.h>
#include<math.h>
main()
{
    float a,b,c,d;

    printf("digite um valor de um lado do triangulo: ");
    scanf("%f",&b);
    printf("digite o valor de outro lado do triangulo: ");
    scanf("%f",&c);
    printf("Digite o angulo formado por esses lados: ");
    scanf("%f",&d);
    a=sqrt( pow (b, 2) + pow (c, 2) - 2*(b*c)*cos(d));
    printf("resultado: %.4f\n",a);

    return 0;
}


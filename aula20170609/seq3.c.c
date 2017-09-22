#include <stdio.h>
#include <stdlib.h>

int main()
{

float a,b,c,d,e,media;

    printf("digite a primeira nota: ");
    scanf("%f",&a);
    printf("digite a segunda nota: ");
    scanf("%f",&b);
    printf("digite a terceira nota: ");
    scanf("%f",&c);
    printf("digite a quarta nota: ");
    scanf("%f",&d);
    printf("digite a quinta nota: ");
    scanf("%f",&e);
    media=((a * 2) +( b * 2)+( c * 2)+(d * 3)+(e * 5)) / 14;
    printf("A media ponderada e: %.3f\n",media);

    return 0;
}

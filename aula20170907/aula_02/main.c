#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,soma,sub,mult,div,resto;
    printf("digite um valor: ");
    scanf("%d",&a);
    printf("digite outro valor: ");
    scanf("%d",&b);
    soma=a+b;
    sub=a-b;
    mult=a*b;
    div=a/b;
    resto=a%b;
    printf("soma: %d\n",soma);
    printf("subtracao: %d\n",sub);
    printf("multiplicacao: %d\n",mult);
    printf("divisao: %d\n",div);
    printf("resto: %d\n",resto);
    return 0;
}

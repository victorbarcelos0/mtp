#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{int a,b,x;
   printf("Logaritmo de qualquer base:");
   scanf("%d",&a);

    printf("digite um numero: ");
    scanf("%d",&b);


    x=log10(a)/log10(b);
    printf("resultado:%d ",x);
    return 0;

}

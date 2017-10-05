#include <stdio.h>
int main()
{


int *ptr_0,*ptr_1, *ptr_2;
int a, b, soma;
printf("Digite dois numeros inteiros: \n");
scanf("%d %d", &a,&b);
soma = a+b;
ptr_0 =   &a;
ptr_1 = &b;
ptr_2 = &soma;
printf("\n%i esta armazenado 0x(%p).\n\n", a, ptr_0);
printf("\n%i esta armazenado  0x(%p).\n\n", b, ptr_1);
printf("\n%i esta armazenada 0x(%p).\n\n", soma, ptr_2);
}

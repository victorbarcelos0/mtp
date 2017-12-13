#include <stdio.h>

int main()
{
int a,fatorial;
printf("digite um valor: ");
scanf("%d", &a);
for(fatorial = 1; a> 1; a = a - 1)
fatorial = fatorial * a;

printf("\nFatorial: %d", fatorial);
return 0;
}

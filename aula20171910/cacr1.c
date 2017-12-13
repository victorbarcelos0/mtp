#include <stdio.h>
#include <stdlib.h>

int eprimo(unsigned int num)
{
unsigned int i;
int v = 1;
for(i = 2; i <= num/2; i++)
if(num%i == 0) {
v = 0;
break;
}
return v;
}

int mostra(unsigned int num)
{
int i, p = 0;
for(i = 1; i <= num/2; i++)
if(eprimo(i) && eprimo(num-i)) {
printf("%d + %d\n", i, num-i);
p++;
}
return p;
}

int main()
{
unsigned int num, p;
printf("Insira um numero: ");
scanf("%u", &num);
if(eprimo(num))
printf("E' primo!\n");
else {
p = mostra(num);
if(p > 0)
printf("%d possbilidades.", p);
else
printf("Não e primo nem expresso por soma de primos.\n");
}
return EXIT_SUCCESS;
}

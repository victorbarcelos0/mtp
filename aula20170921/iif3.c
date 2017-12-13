#include <stdio.h>
#include <conio.h>

int main()
{
double fat, n;
printf("Digite o valor para o calculo do seu fatorial: ");
scanf("%lf", &n);
if (n <= 20)
{
for(fat = 1; n > 1; n = n - 1)
fat = fat * n;
printf("\nFatorial: %lf", fat);
}
else
printf("ERRO");
getche ();
return 0;
}

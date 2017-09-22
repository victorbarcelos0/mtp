#include <stdio.h>

int main() {
int i, j, k;
float n, n2,pot, aux;
printf("Digite um numero e sua potencia respectivamente:");
scanf("%f %f",&n,&n2);
if(n2 == 0) {
pot = 1;
}
else
{
pot = n;
for(i = 1; i < n2; i++) {
aux = 0;
for(j = 1; j <= n; j++) {
aux = aux + pot;
}
pot = aux;
}
}
printf("Potencia: %f", pot);
return 0;
}

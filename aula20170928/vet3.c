#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {

int i,vetA[10], vetB[10],soma[10]={0},mult[10]={0};

for (i=0; i<10; i++) {
printf("Informe valor do elemento vetA[%d]: ", i);
scanf("%d", &vetA[i]);
}
printf("\n");

for (i=0; i<5; i++) {
printf("Informe valor do elemento vetB[%d]: ", i);
scanf("%d", &vetB[i]);

soma[i] = vetA[i] * vetB[i];
mult[i] = vetA[i] + vetB[i];
}
printf("\n");

for (i=0; i<5; i++) {
printf("A multiplicacao entre vetA[%d] e vetB[%d]= %d\n", i, i, soma[i]);
}

for (i=0; i<5; i++)
printf("A soma entre vetA[%d] e vetB[%d]= %d\n",i,i,mult[i]);

return 0;
}

#include <stdio.h>

float main(){
char palavra[256];
int j;
printf("Digite uma palavra:\n");
scanf("%s",palavra);
for(j=0; palavra[j]!= '\0'; j++);
printf("A palavra contem %d letras.\n", j);
system("pause");
return 0;
}

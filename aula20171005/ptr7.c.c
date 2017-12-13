#include <stdio.h>
#include <stdlib.h>

int main()
{
int string[4];
int a;
for(a = 0; a < 4; a++)
{
string[a]= 0;
}
int *ptr;
printf("Digite os elementos do codigo: \n");
for(a = 0 ; a < 4; a++)
{
scanf("%d", &string[a]);
}
ptr = string;
printf("%s ", ptr );
}

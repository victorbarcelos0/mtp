#include <stdio.h>
#include<stdlib>
#include<conio.h>
int soma(int * x, int * y, int * w, int * d){
*x = (*x)*(*d) + (*w)*(*y);
*y = (*y)*(*d);
printf("\n A funcao: %d / %d", *x,*y);
return 0;
}
int main()
{
int x,y,d,w;
do
{
printf("Insira o numerador e o denominador da primeira fracao:\n");
scanf("%d %d", &x, &y);
printf("Insira o numerador e o denominador da segunda fracao:\n");
scanf("%d %d", &w, &d);
if(d==0 || y==0 )
printf("\nERRO\n");
}
while(d==0 || b==0 );
soma( &x, &y, &w, &d);
printf("\nPos funcao %d / %d", x,y);
return 0;
}

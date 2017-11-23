# include  < stdio.h >
# include  "matriz.h"

int main()
{
Matriz a;
int m;
long float b;
printf ("\nDigite a ordem matriz: \n");
scanf ("%d" ,&m);
A=criarMatriz(m,m);
CertifiedMatriz(a);
b=determinante   (a);
printf ( "\nDeterminante da matriz: % lf  \n",b);
destruirMatriz(a);
return  0 ;
}

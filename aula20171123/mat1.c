# include  <stdio.h>
# include  "matriz.h"

int  main ()
{
Mat M,adjM;
int ord;
printf( " Digite a ordem da matriz desejada: \ n " );
scanf( "%d" ,&ord);
A=criarMatriz (ord,ord);
CertifiedMat(M);
adjMat=adjunta(M);
printf ( " \ n Matriz Adjunta: \ n " );
imprimirMat(adjM);
destruirMat(M);
destruirMat(adjM);
return 0;
}

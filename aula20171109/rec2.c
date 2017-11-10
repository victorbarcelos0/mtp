#include<stdio.h>
#include<stdlib.h>
int  inverte ( char * frase)
 {

if(* frase)
{
inverte (frase + 1 );
printf ( " % c " , * frase);
}
return  0 ;
}
int  main ()
{
printf("Digite alguma frase: ");
char frase [ 256 ];
fgets (frase, 256 , stdin);
inverte (frase);
return 0 ;
}

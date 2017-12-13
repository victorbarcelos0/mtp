#include<stdio.h>
#include<stdlib.h>


int  main () {
 char frase [256];
 int i;
 printf ( " Entre com uma frase: \ n " );
 fgets (frase, 256, stdin);
 for (i = 0 ; frase [i]; i ++)

 frase [i] = toupper (frase [i]);

 printf ( " % s " , frase);
return EXIT_SUCCESS;

 }

#include<stdio.h>
#include<string.h>
#include<ctype.h>
 int main(){
     int size,i;
     char string1[21],maiusculo[21],minusculo[21];
     printf("entre com uma frase: ");
     gets(string1);

    for(i=0,i<21,i++)
        {

        maiusculo[i]=toupper(string1[i]);
        minusculo[i]=tolower(string1[i]);

    }
    printf("Maiusculo:%s e Minusculo:%s\n",maiusculo,minusculo);
    printf("\n\n\n");
    system("pause");
    return (0);



 }


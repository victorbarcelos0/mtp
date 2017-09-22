#include <stdio.h>
#include <stdlib.h>
int main(){
int i,num,result = 0;
printf("Digite um valor: \n");
scanf("%d",&num);
for(i = 1;i < num ; i++){
if(num % i == 0){
result = result + i;
}
}
if(num == result)
printf("Eh um numero perfeito\n\n",num);
else
printf("Nao eh um numero perfeito\n\n",num);

return 0;
}

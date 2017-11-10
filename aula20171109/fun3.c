#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
int comparar(int x, int y, int * A, int * B){
int i=0, j=0;

for(i=0; i<x; i++)
{
for(j=0; j<y ;j++)
{
if(A[i]== B[j])
{
printf(" %d ", A[i]);
}
}
}
return 0;
}
int main()
{
int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31};
int x = sizeof(A)/sizeof(int);
int B[] = {1, 2, 3, 4, 5, 6, 8, 10, 12, 7, 29};
int y = sizeof(B)/sizeof(int);
comparar( x,y, A, B);
return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float x1, x2, y1, y2, dist;


    printf("Informe a abcissa1 (x1):\n");
    scanf("%f", &x1);
    printf("Informe a ordenada1 (y1):\n");
    scanf("%f", &y1);
    printf("Informe a abcissa2 (x2):\n");
    scanf("%f", &x2);
    printf("Informe a ordenada2 (y2):\n");
    scanf("%f", &y2);
    dist = sqrt( pow (x2 - x1, 2) + pow (y2 - y1, 2));
    printf("\n\nA distancia entre os pontos eh %.4f\n\n", dist);

    system("pause");

    return 0;
}

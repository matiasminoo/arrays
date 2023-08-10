#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int a[100];
    double sum = 0;

    for (int i = 0; i < 100; i++)
    {
        a[i] = rand() % 101;
        printf("%d ", a[i]);
        sum += a[i];
    }
    printf("\n");

    int prom = sum / 100;
    printf("El promedio es: %d \n", prom);
    return 0;
}
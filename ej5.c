#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int a[100];
    int min = 0;
    int max = 0;

    for (int i = 0; i < 100; i++)
    {
        a[i] = rand() % 101;
        printf("%d ", a[i]);
        if (a[i] < min)
        {
            min = a[i];
        }
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("\n");

    printf("El minimo del array es: %d\n", min);
    printf("El maximo del array es: %d\n", max);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

void swap(int a[], int i, int j)
{
    int t = a[i];
    a[i] = a[j];
    a[j] = t;
}

int main()
{
    int min = 1;
    int max = 6;
    int a[] = {1, 2, 3, 4, 5, 6};
    swap(a, 0, 5);
    swap(a, 1, 4);
    swap(a, 2, 3);
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
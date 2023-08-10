#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n = atoi(argv[1]);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        a[i] = i;
        printf("%d \n", a[i]);
    }
    return 0;
}
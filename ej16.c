#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int search(const char *elemento, const char *array[], int arraylength)
{
    for (int i = 0; i < arraylength; i++)
    {
        if (strcmp(elemento, array[i]) == 0)
        {
            return i;
        }
    }
    return -1;
};

int main(int argc, char const *argv[])
{

    if (argc != 2)
    {
        printf("Uso: %s <palabra>\n", argv[0]);
        return 1;
    }

    const char *s = argv[1];

    const char *a[] = {
        "arbol", "bolsa", "casa", "dado", "elefante", "foca", "gato", "hijo", "iguana", "jarron", "koala"};

    int arraylength = sizeof(a) / sizeof(a[0]);

    int result = search(s, a, arraylength);

    if (result != -1)
    {
        printf("El elemento esta en el indice: %d.\n", result);
    }
    else
    {
        printf("El elemento no esta en el array :(\n");
    }

    return 0;
}

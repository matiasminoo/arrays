#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void to_lower_case(const char *palabra)
{
    if (isalpha(palabra))
    {
        char letra = tolower(*palabra);
    }
}

int main(int argc, char const *argv[])
{
    const char *palabra = argv[1];
    to_lower_case(palabra);
    printf("La palabra antes: %s\n", argv[1]);
    printf("La palabra ahora: %s\n", palabra);
    return 0;
}

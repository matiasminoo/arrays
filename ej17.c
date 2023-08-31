#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void to_lower_case(char *word)
{
    for (int i = 0; word[i]; i++)
    {
        if (isalpha(word[i]))
        {
            word[i] = tolower(word[i]);
        }
    }
}
int main(int argc, char *argv[])
{

    if (argc != 2)
    {
        printf("Uso: %s <word>\n", argv[0]);
        return 1;
    }

    to_lower_case(argv[1]);
    printf("La palabra antes: %s\n", argv[1]);
    printf("La palabra ahora: %s\n", argv[1]);
    return 0;
}

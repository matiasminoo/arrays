#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool esPalindromo(const char *cadena) {
    int i = 0;
    int j = strlen(cadena) - 1;

    while (i < j) {
        while (i < j && !isalpha(cadena[i])) {
            i++;
        }
        while (i < j && !isalpha(cadena[j])) {
            j--;
        }

        if (tolower(cadena[i]) != tolower(cadena[j])) {
            return false;
        }

        i++;
        j--;
    }

    return true;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <palabra>\n", argv[0]);
        return 1;
    }

    if (esPalindromo(argv[1])) {
        printf("Es un palíndromo.\n");
    } else {
        printf("No es un palíndromo.\n");
    }

    return 0;
}

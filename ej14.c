#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <cadena>\n", argv[0]);
        return 1;
    }

    char *cadena = argv[1];
    int frecuencia[26] = {0};  

    for (int i = 0; i < strlen(cadena); i++) {
        if (isalpha(cadena[i])) {  
            char letra = tolower(cadena[i]); 
            frecuencia[letra - 'a']++;  
        }
    }

    printf("Frecuencia de letras:\n");
    for (int i = 0; i < 26; i++) {
        if (frecuencia[i] > 0) {
            printf("%c: %d\n", 'a' + i, frecuencia[i]);
        }
    }

    return 0;
}

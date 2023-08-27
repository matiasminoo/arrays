#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <cadena>\n", argv[0]);
        return 1;
    }
    
    char *cadena = argv[1];
    int longitud = strlen(cadena);
    
    printf("La cadena \"%s\" tiene %d caracteres.\n", cadena, longitud);
    
    return 0;
}

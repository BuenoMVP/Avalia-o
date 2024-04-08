#include <stdio.h>
#include <string.h>

int main() {
    char frase[6] = "frase"; 
    char aux[6] = "teste"; 

    aux[5] = '\0';

    for(int i=4; i>=0; i--){
        aux[4-i] = frase[i];
    }

    printf("Frase invertida: %s", aux);

    return 0;
}


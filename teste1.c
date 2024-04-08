#include <stdio.h>
#include <stdlib.h>

int main(){
    int k = 0, soma = 0,  indice = 13;

    while(k<=indice){
        k+=1;
        soma += k;
    }
    printf("%d", soma);

    return 0;
}
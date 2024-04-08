#include <stdio.h>

int pertenceFibonacci(int n) {
    int a = 0, b = 1, temp, aux=0;

    if (n == 0 || n == 1)
        aux = 1;

    while (b <= n) {
        if (b == n)
            aux = 1;
        temp = a;
        a = b;
        b = temp + b;
    }

    return aux;
}

int main() {
    int num;

    printf("Informe um numero: ");
    scanf("%d", &num);

    if (pertenceFibonacci(num))
        printf("%d pertence a sequencia de Fibonacci\n", num);
    else
        printf("%d nao pertence a sequencia de Fibonacci\n", num);

    return 0;
}

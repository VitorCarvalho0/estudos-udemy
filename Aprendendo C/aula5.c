//Estrutuda de reptição While
// while (condição) { comando }

#include <stdio.h>

int main() {

    int x, soma;

    soma = 0;
    printf("Digite o primeiro número: ");
    scanf("%d", &x);

    while ( x != 0 ) {
        soma = soma + x;
        prinf("Digite outro número: ");
        scanf("%d", &x);
    }

    prinf("Soma = %d\n", soma);

    return 0;
}
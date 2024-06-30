// Estrutura FOR
// for ( inicio;  condição; incremento ) { comando1 }
// inicio > executa somente na primeira vez
// condição > executa e volta se for Verdadeiro ou pula fora se for Falso
// incremento > execulta toda vez depois de ovltar 

#include <stdio.h>

int main() {

    int N, i, x, soma;

    printf("Quantos números serão digitados? ");
    scanf("%d", &N);

    soma = 0;
    for ( i = 1; i <= N; i++) {
        printf("Digite um número: ");
        scanf("%d", &x);
        soma = soma + x;
    }

    printf("Soma = %d\n", soma);

    return 0;
}
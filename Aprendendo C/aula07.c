// vetores em C

#include <stdio.h>

int main() {

    int N, i;

    printf("Quandos números serão digitados? ");
    scanf("%d", &N);

    double vet[N];

    for ( i = 0; i < N; i++) {
        printf("Digite um número: ");
        scanf("%lf", &vet[i]);
    }

    printf("\nNúmeros Digitados:\n");

    for (i = 0, i < N, i++) {
        printf("%.1lf\n", vet[i]);
    }


    return 0;
}
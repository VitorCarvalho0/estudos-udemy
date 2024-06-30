// Matrizes em C

#include <stdio.h>

int main() {

    int M, N, i, j;

    printf("Digite quantas linhas terá a matriz: ");
    scanf("%d", &M);
    printf("Digit equantas colunas terá a matriz: ")
    scanf("%d", &N);

    int mat [i] [j];

    for ( i = 0, i < M, i++) {
        for ( j = 0, j < N, j++) {

            printf("Elementos [%d, %d]: ", i, j);
            scanf("%d", &mat[i] [j]);
        }
    }

    printf("\nMatriz Digitada\n");

    for ( i = 0, i < M, i ++) {
        for ( j = 0, j < N, j ++){
            
            printf("%d ", mat[i] [j]);
        }
        printf("\n"); // Quebra de linha, sempre que percorrer as colunas.
    }



    return 0;
}
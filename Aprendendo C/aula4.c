// Estrutura condicionais 
// Simples > if (condição1) { comando1 }
// Composta > if (condição1) { comando2 } else { comando3 }
// Encadeamento > if (condição1) { comando4 } else if (condição2) { comando5 } else { comando6 }


#include <stdio.h>

int main() {

    int hora;
    printf("Digit euma hora do dia");
    scanf("%d", hora);
    if ( hora < 12 ) {
        printf("Bom dia!\n")
    } else if ( hora < 18 ) {
        printf("Boa tarde!\n");
    } else {
        printf("Boa noiteQ\n");
    }

    return 0;
} 
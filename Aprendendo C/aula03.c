// comando de saída de dados `printf` e para funcionar você precisa colcar a bibilioteca #include <stdio.h>
// Quando você for imprimir uma variável, você tera que usar um placeholder de formatação
// variável tipo: int = %d ou %i, long int = %li, long long int = %lli, float = %f, double = %lf, char = $c, chat[] = %s;
// qubra de linha = \n dentro da ""



#include <stdio.h>

int main() {

    printf("bom dia\n");
    printf("Boa Tarde");

    int x, y;

    x = 10;
    y = 20;

    printf("%d\n", x);
    printf("%d\n", y);

    double z;

    z = 2.34567;

    printf("%lf\n", z);
    printf("%.2lf\n", z); //Usando o .2 depois de %, você inidica quantas casa decimais quer



    return 0;
}
// numero inteiro = int
// ponto flutuante = double
// unico caractere = char
// texto = chair[]
// valor lógico = int
// #include <string.h> = garante que as funçoes string funcione.

#include <stdio.h>

int main() {

    int idade = 20;
    double salario, altura;
    char genero = 'F';
    char nome[50] = "Maria Silva";

    // ou strcpy(nome, "Maria Silva");

    salario = 5800.5; 
    altura = 1.63;
    

    printf("Idade = %d\n", idade);
    printf("Salario = %.2lf\n", salario);
    printf("Altura = %2lf\n", altura);
    printf("Genero = %c\n", genero);
    printf("Nome = %s/n", nome);

    return  0;
}

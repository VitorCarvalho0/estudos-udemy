// entrada de dados

// SCANF > para ler dados de tipo básico // FGETS > para ler texto até quebra de linha

void limpar_entrada() { 
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
} // aqui foi cria uma função para poder tirar espaços antes de pegar o dado "nome"

#include <stdio.h>
#include <string.h>

int main() {

    int idade;
    double salario, altura;
    char genero;
    char nome[50];

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("digite seu salaro: ");
    scanf("%lf", &salario);

    printf("Digite sua altura: ");
    scanf("%lf", &salario);

    printf("Digite seu genero: ");
    scanf("%c", &genero);

    printf("Digite seu nome: ");
    limpar_entrada();
    fgets(nome, 50, stdin);
    

    printf("Idade = %d\n", idade);
    printf("Salario = %.2lf\n", salario);
    printf("Altura = %2lf\n", altura);
    printf("Genero = %c\n", genero);
    printf("Nome = %s/n", nome);

    return 0;
}
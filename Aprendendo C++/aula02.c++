// Número inteiro = int
// Número flutuante (real) = double
// Único catactere = char  exemplo ("F")
// Texto = caractere = string
// Valor lógico = bool

#include <iostream> // Bibliotéca de entrada e saída
#include <iomanip> // Serve para formatar o número de casa decimais
#include <string> // Serve para usar funçoes de manipulaçoes de texto

usinf namespace std;

int main() {

    int idade;
    double salario, altura;
    char genero;
    string nome;

    idade = 20;
    salario = 5800.5;
    altura = 1.63;
    genero = 'F';
    nome = "Maria Silva";

    cout << fixed << setprecision(2); // Esse comenado fixa o número de casas decimais
    cout << "Idade = " << idade << endl;
    cout << "Salário = " << salario << endl;
    cout << "Altura = " << altura << endl;
    cout << "Genero = " << genero << endl;
    cout << "Nome = " << nome << endl;

    return 0;
}
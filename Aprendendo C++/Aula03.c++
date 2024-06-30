// Saída de dados em C++
// Comando = cout << e para usar esse operador, você precisa usar o #include <iostream> e tem que referenciar usando o = using namespace std;

// Formatação de ponto flutuante
// Comando = cout << fixed << setprecision(2), precisa usar a biblioteca #include <iomanip> e usar o using namespace std;

// Biblioteca universal (inclui tudo e dispensa bibliotecas individuais)
// #include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {

    int idade;
    double salario;
    string nome;
    char sexo;

    idade = 32;
    salario = 4560.9;
    nome = "Maria Silva";
    sexo = 'F';
    
    cout << fixed << setprecision(2);
    cout << "A funcionaria " << nome << ", sexo "
    << sexo << ", ganha " << salario << " e tem "
    << idade << " anos" << endl;

    return 0;
}
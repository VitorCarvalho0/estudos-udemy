// Entrada de dados
// Comando = cin >> e getline (para ler texto até a quebra de linha)
// Biblioteca #include <iostream> e using namespace std;

// Comando par alimpeza de Buffer = cin.ignore(INT_MAX. '\n');
// Usar quando você for let um texto até a quebra de linha (getline), exemplo:

    cout >> "Digite sua idade: ";
    cin >> idade;
    cout << "Digite seu nome completo: ";
    cin.ignore(INT_MAX, '\n'); // Limpeza de buffer
    getline(cin, nome);

// Lembrando que para o INT_MAX é preciso colocar no inicio #include <climits>

#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
using namespace std;
int main() {
    double salario1, salario2;
    string nome1, nome2;
    int idade;
    char sexo;

    cout << "Nome da primeira pessoa: ";
    getline(cin, nome1);
    cout << "Salario da primeira pessoa: ";
    cin >> salario1;
    cout << "Nome da segunda pessoa: ";
    cin.ignore(INT_MAX, '\n'); // ------------- limpeza de buffer
    getline(cin, nome2);
    cout << "Salario da segunda pessoa: ";
    cin >> salario2;
    cout << "Digite uma idade: ";
    cin >> idade;
    cout << "Digite um sexo (F/M): ";
    cin >> sexo;

    cout << fixed << setprecision(2);
    cout << "Nome 1: " << nome1 << endl;
    cout << "Salario 1: " << salario1 << endl;
    cout << "Nome 2: " << nome2 << endl;
    cout << "Salario 2: " << salario2 << endl;
    cout << "Idade: " << idade << endl;
    cout << "Sexo: " << sexo << endl;
    return 0;
} 
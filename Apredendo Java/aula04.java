/* 
Entrada de dados ( Comandos )

import java.util.Scanner; (biblioteca)

leia Scanner sc = new Scanner(System.in);

int x = sc.nextInt();
double y = sc.nextDouble();
char z = sc.next().charAt(0);
String s = sc.nextLine();
sc.close();

limpeza de buffer 

Quando você for ler um texto até a quebra de linha (nextLine), mas antes o seu programa já leu algum outro dado e
deixou uma quebra de linha pendente. 

Exemplo:

System.out.print("Digite sua idade: ");
idade = sc.nextInt();
System.out.print("Digite seu nome completo: ");
sc.nextLine(); // ------------- limpeza de buffer
nome = sc.nextLine(); 

 */

import java.util.Locale;
import java.util.Scanner;

public class aula04 {
    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        double salario1, salario2;
        String nome1, nome2;
        int idade;
        char sexo;

        System.out.print("Nome da primeira pessoa: ");
        nome1 = sc.nextLine();
        System.out.print("Salario da primeira pessoa: ");
        salario1 = sc.nextDouble();

        System.out.print("Nome da segunda pessoa: ");
        sc.nextLine(); // ------------- limpeza de buffer
        nome2 = sc.nextLine();
        System.out.print("Salario da segunda pessoa: ");
        salario2 = sc.nextDouble();

        System.out.print("Digite uma idade: ");
        idade = sc.nextInt();
        System.out.print("Digite um sexo (F/M): ");
        sexo = sc.next().charAt(0);

        System.out.println("Nome 1: " + nome1);
        System.out.println("Salario 1: " + String.format("%.2f", salario1));
        System.out.println("Nome 2: " + nome2);
        System.out.println("Salario 2: " + String.format("%.2f", salario2));
        System.out.println("Idade: " + idade);
        System.out.println("Sexo: " + sexo);

        sc.close();
    }
} 
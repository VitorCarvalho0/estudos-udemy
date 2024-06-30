// Saída de dados
// Comando: System,out.print(mantem na mesma linha) ou  System.out.println(faz a quebra de linha)

import java.util.Locale;

public class aula03 {

    public static void main(String[] args) {

        Locale.setDefault(Locale.US);

        int idade;
        double salario, altura;
        char genero;
        String nome;

        idade = 20;
        salario = 5800.5;
        altura = 1.63;
        genero = 'F';
        nome = "Maria Silva";

        System.out.println("IDADE = " + idade);
        System.out.println("SALARIO = " + String.format("%.2f", salario));
        System.out.println("ALTURA = " + String.format("%.2f", altura));
        System.out.println("GENERO = " + genero);
        System.out.println("NOME = " + nome);
    }
} 

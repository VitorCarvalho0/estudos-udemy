Algoritmo "Pagamento"


Var

    valor, horas, pagamento: real
    nome: caractere

Inicio

      escreva("Digite seu nome: ")
      leia(nome)
      escreva("Valor por hora: ")
      leia(valor)
      escreva("Horas trabalhadas: ")
      leia(horas)
      
      pagamento <- valor * horas
      
      escreval("O pagamento para ", nome, "deve ser de R$", pagamento)

Fimalgoritmo
Algoritmo "notas"

Var
      nota1,nota2,media: real

Inicio

      escreva("Digite a primeira nota: ")
      leia(nota1)
      escreva("Digite a segunda nota: ")
      leia(nota2)
      
      media <- (nota1 + nota2)
      
      se media > 60 entao
         escreva("Sua média é : ",media:2:2)
      senao
           escreval("Sua média é: ",media:2:2)
           escreva("Você está reprovado!")
      fimse


Fimalgoritmo
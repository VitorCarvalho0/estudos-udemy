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
         escreva("Sua m�dia � : ",media:2:2)
      senao
           escreval("Sua m�dia �: ",media:2:2)
           escreva("Voc� est� reprovado!")
      fimse


Fimalgoritmo
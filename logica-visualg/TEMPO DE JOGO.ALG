Algoritmo "tempo de jogo"

Var
    inicial, final, duracao: inteiro

Inicio

      escreva("Hora inicial: ")
      leia(inicial)
      escreva("Hora final: ")
      leia(final)
      
      se inicial < final entao
         duracao <- final - inicial
      senao
         duracao <- 24 - inicial + final
      fimse

      escreval("O jogo durou ", duracao, "hora(s)")


Fimalgoritmo
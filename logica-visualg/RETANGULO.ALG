Algoritmo "Retangulo"

Var
     base, altura, area, perimetro, diagonal : real

Inicio

      escreva("Digite a base do retangulo: ")
      leia(base)
      escreva("Digite a altura do retangulo: ")
      leia(altura)
      
      area <-  base * altura
      perimetro <- 2* (base + altura)
      diagonal <- raizQ(exp(base, 2) + exp(altura, 2))
      
      escreval("A area �: ", area:8:4)
      escreval("O perimetro �: ", perimetro)
      escreval("A Diagonal �: ", diagonal:8:4)

Fimalgoritmo
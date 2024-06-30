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
      
      escreval("A area é: ", area:8:4)
      escreval("O perimetro é: ", perimetro)
      escreval("A Diagonal é: ", diagonal:8:4)

Fimalgoritmo
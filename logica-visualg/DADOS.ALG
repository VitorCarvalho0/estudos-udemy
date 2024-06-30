Algoritmo "Dados"

Var
   a, b, c, maior: real

Inicio

      escreval("Digite a distancia 1: ")
      leia(a)
      escreval("Digite a distancia 2: ")
      leia(b)
      Escreval("Digite a distancia 3: ")
      leia(c)
      
      se (a > b) e (a > c) entao
         maior <- a
      senao
           se (b > a) e (b > c) entao
           maior <- b
           senao
           maior <- c
           fimse
      fimse
      
      Escreval("A maior distacia: ", maior)

Fimalgoritmo
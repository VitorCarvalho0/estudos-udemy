Algoritmo "menor de tres"

Var

   a, b, c, menor : inteiro

Inicio

      escreval("Digite o primeiro número: ")
      leia(a)
      escreval("Digite o segundo número: ")
      leia(b)
      escreval("Digite o terceiro número: ")
      leia(c)
      
      se (a < b) e (a < c) entao
         menor <- a
      senao
       se (b < c) entao
         menor <- b
       senao
           menor <- c
           fimse
      fimse
      
      Escreval("O menor é", menor )


Fimalgoritmo

Algoritmo "menor de tres"

Var

   a, b, c, menor : inteiro

Inicio

      escreval("Digite o primeiro n�mero: ")
      leia(a)
      escreval("Digite o segundo n�mero: ")
      leia(b)
      escreval("Digite o terceiro n�mero: ")
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
      
      Escreval("O menor �", menor )


Fimalgoritmo

Algoritmo "semnome"

Var
   a, b, c, x1, x2, delta : real
Inicio

      escreva("Coeficíente a: ")
      leia(a)
      escreva("Coeficíente b: ")
      leia(b)
      escreva("Coeficíente c: ")
      leia(c)
      
      delta <- exp(b, 2) - 4 * a * c
      
      se (a = 0) ou (delta < 0) entao
         escreval("Essa equação não possui raizes reais.")
      senao
           x1 <- (-b + raizq(delta)) / (2 * a)
           x2 <- (-b - raizq(delta)) / (2 * a)
           escreval("X1 = ", x1:6:4)
           escreval("X2 = ", x2:6:4)
      fimse
      
      

Fimalgoritmo
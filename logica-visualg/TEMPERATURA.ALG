Algoritmo "Temperatura"

Var

   temp: caractere
   c , f: real

Inicio

      escreva("Você vai digitar a temperatura em qual escalda? (C/F): ")
      leia(temp)
      
      se (temp = "f") então
         escreva("Digite a temperatura em Fahrenheit: ")
         leia(f)
         c <- 5 / 9 * (f - 32)
         escreval ("valor em Fahrenheit: ", c:4:2)
      senão
           se (temp = "c") então
              escreva("Digite a temperatura em Celsius: ")
              leia(c)
              f <- 9 * c / 5 + 32
              escreval ("valor em celsius: ", f:4:2)
           senao
                escreva("ERRO: Erro de Digitação, tente novamente!")
           fimse
      fimse


      

      




Fimalgoritmo
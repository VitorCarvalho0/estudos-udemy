Algoritmo "Temperatura"

Var

   temp: caractere
   c , f: real

Inicio

      escreva("Voc� vai digitar a temperatura em qual escalda? (C/F): ")
      leia(temp)
      
      se (temp = "f") ent�o
         escreva("Digite a temperatura em Fahrenheit: ")
         leia(f)
         c <- 5 / 9 * (f - 32)
         escreval ("valor em Fahrenheit: ", c:4:2)
      sen�o
           se (temp = "c") ent�o
              escreva("Digite a temperatura em Celsius: ")
              leia(c)
              f <- 9 * c / 5 + 32
              escreval ("valor em celsius: ", f:4:2)
           senao
                escreva("ERRO: Erro de Digita��o, tente novamente!")
           fimse
      fimse


      

      




Fimalgoritmo
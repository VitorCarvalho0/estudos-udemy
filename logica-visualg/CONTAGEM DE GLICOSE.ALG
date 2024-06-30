Algoritmo "Contagem de glicose"

Var

medida: real

Inicio

      escreva("Digite a medida de glicose: ")
      leia(medida)

      se medida <= 100 entao
         escreval("Clasificação; Normal")
      senao
           se medida <= 140 entao
              escreval("Classificação: Elevada")
           senao
                escreval("Classificação: Diabetes")
           fimse
      fimse
Fimalgoritmo
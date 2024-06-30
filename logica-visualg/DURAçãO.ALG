Algoritmo "duração"

Var

   horas, minutos,segundos, duracao: real

Inicio

      escreva("digite a duração em segundos: ")
      leia(duracao)
      
      horas <- (duracao / 3600)
      minutos <- (duracao mod 3600) /60
      segundos <- (duracao mod 3600) mod 60
      
      escreval(horas:1,":",minutos:1,":",segundos:2)


Fimalgoritmo
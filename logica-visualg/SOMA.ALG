Algoritmo "Troca "

Var

     preco, dinheiro, troco: real
     unidade: inteiro

Inicio

      escreva("Pre�o unit�rio do produto: ")
      leia(preco)
      escreva("Quantidade comprada: ")
      leia(unidade)
      escreva("Dinheiro recebido: ")
      leia(dinheiro)
      
      troco <- dinheiro - (preco * unidade)
      
      escreval("Troco: ", troco:4:2)
      


Fimalgoritmo
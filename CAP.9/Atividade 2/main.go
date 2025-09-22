package main

import (
	"fmt"
	"time"
)

func escrever(texto string) {
	for i := 0; i < 5; i++ {
		fmt.Println(texto, i)
		time.Sleep(time.Millisecond * 500)
	}
}

func main() {
	go escrever("Corrotina")  // executa em paralelo
	escrever("Função normal") // executa no fluxo principal
}

/*
Respostas às questões:
- O que acontece com a ordem das mensagens exibidas?
  → As mensagens aparecem intercaladas: "Corrotina" e "Função normal" se misturam na saída.

- Por que isso ocorre?
  → Porque a instrução 'go' cria uma nova corrotina. O escalonador de Go alterna a execução
    entre a rotina principal e a corrotina, compartilhando o tempo da CPU.

- Relação com o Cap. 9 (Sebesta):
  → Corrotinas são subprogramas que podem ser "suspensos" e "retomados".
    No Go, com a palavra-chave 'go', cada corrotina roda de forma concorrente,
    dando a impressão de paralelismo e intercalando mensagens naturalmente.
*/

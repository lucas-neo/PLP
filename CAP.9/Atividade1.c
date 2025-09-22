#include <stdio.h>

// Função por valor: recebe uma cópia de 'x'
void dobrar_valor(int x) {
    x = x * 2;
    // Questão: nesta versão, a variável original NÃO é alterada.
    // Isso acontece porque a função manipula apenas a cópia local.
}

// Função por referência: recebe o endereço de 'x'
void dobrar_referencia(int *x) {
    *x = (*x) * 2;
    // Questão: nesta versão, a variável original É alterada.
    // Isso acontece porque acessamos diretamente a célula de memória da variável.
}

int main() {
    int num = 10;

    // Teste por valor
    dobrar_valor(num);
    printf("Após dobrar por valor: %d\n", num);

    // Teste por referência
    dobrar_referencia(&num);
    printf("Após dobrar por referência: %d\n", num);

    return 0;
}

/*
Respostas às questões:
- Diferença observada: por valor não altera 'num'; por referência altera.
- Só altera a de referência porque a função acessa a variável original, não uma cópia.
- Relação com o Cap. 9: são duas estratégias de passagem de parâmetros.
  "Por valor" é seguro (não afeta o chamador), mais menos eficiente se for muito grande.
  "Por referência" é eficiente e permite alteração, mas pode introduzir efeitos colaterais.
*/

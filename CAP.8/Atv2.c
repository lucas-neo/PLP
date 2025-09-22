#include <stdio.h>

long fatorial(int n) { 
    long f = 1; 
    for (int i = 2; i <= n; i++) f *= i; 
    return f; 
}

int main() {
    int opcao;
    do {
        printf("1) Quadrado\n2) Fatorial\n3) Sair\nEscolha: ");
        if (scanf("%d", &opcao) != 1) return 0;

        switch (opcao) {
            case 1: {
                int x; printf("Numero: "); scanf("%d", &x);
                printf("Quadrado = %d\n", x * x);
                break;
            }
            case 2: {
                int n; printf("Numero (n>=0): "); scanf("%d", &n);
                printf("Fatorial = %ld\n", fatorial(n));
                break;
            }
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 3);
    return 0;
}

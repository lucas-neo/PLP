#include <stdio.h>

void contador() {
    int a = 0;        // variável automática
    static int b = 0; // variável estática

    a++;
    b++;

    printf("a = %d, b = %d\n", a, b);
}

int main() {
    contador();
    contador();
    contador();
    return 0;
}

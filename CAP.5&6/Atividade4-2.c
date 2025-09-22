#include <stdio.h>

struct Livro {
    char titulo[50];
    char autor[50];
    int anoPublicacao;
};

int main() {
    struct Livro l1 = {"O Hobbit", "J.R.R. Tolkien", 1937};
    printf("Titulo: %s\n", l1.titulo);
    return 0;
}

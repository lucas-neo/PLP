import java.util.*;

class Livro {
    String titulo;
    String autor;
    int anoPublicacao;

    Livro(String titulo, String autor, int anoPublicacao) {
        this.titulo = titulo;
        this.autor = autor;
        this.anoPublicacao = anoPublicacao;
    }
}

public class Atividade4 {
    public static void main(String[] args) {
        ArrayList<Livro> livros = new ArrayList<>();
        livros.add(new Livro("O Hobbit", "Tolkien", 1937));
        livros.add(new Livro("1984", "Orwell", 1949));
        livros.add(new Livro("Clean Code", "Robert C. Martin", 2008));

        for (Livro l : livros) {
            System.out.println(l.titulo);
        }
    }
}

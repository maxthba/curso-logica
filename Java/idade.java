import java.util.Scanner;
import java.util.Locale;

public class idade {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Locale.setDefault(Locale.US);

        String nome1, nome2;
        int idade1, idade2; 
        double media;

        System.out.print("digite o nome da primeira pessoa: ");
        nome1 = sc.nextLine();
        System.out.print("digite a idade da primeira pessoa:");
        idade1 = sc.nextInt();
        sc.nextLine();
        System.out.print("digite o nome da segunda pessoa: ");
        nome2 = sc.nextLine();
        System.out.print("digite a idade da segunda pessoa:");
        idade2 = sc.nextInt();

        media = (double)(idade1 + idade2)/(double)2;

        System.out.println("Dados da primeira pessoa:"
        +"\nNome: "+nome1+
        "\nIdade: "+idade1+
        "\nDados da segunda pessoa:"+
        "\nNome: "+nome2+
        "\nIdade: "+idade2+
        "\nA media de idade eh de "+media);
        
        sc.close();
    }
}

import java.util.Scanner;
import java.util.Locale;

public class entrada_de_dados {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        String nome1, nome2;
        double salario1, salario2;
        int idade;
        char sexo;

        System.out.println("Digite o nome da primeira pessoa: ");
        nome1 = sc.nextLine();
        System.out.println("Digite o salario da primeira pessoa: ");
        salario1 = sc.nextDouble();

        System.out.println("Digite o nome da segunda pessoa: ");
        sc.nextLine();
        nome2 = sc.nextLine();
        System.out.println("Digite o salario da segunda pessoa: ");
        salario2 = sc.nextDouble();

        System.out.println("digite uma idade: ");
        idade = sc.nextInt();
        System.out.println("digite sexo (M/F): ");
        sexo = sc.next().charAt(0);

        System.out.println("nome 1 = "+nome1+" salario1 = "+salario1+"\nnome2 = "+nome2+" salario2 = "+salario2+ 
        "\nidade = "+idade+"sexo = "+sexo);
        
        sc.close();

    }
}

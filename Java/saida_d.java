import java.util.Locale;

public class saida_d {
    public static void main(String[] args) {
        //printando mensagens na mesma linha
        System.out.print("bom dia ");
        System.out.print("boa noite ");

        //printando numeros reais com 2 casas decimais
        Locale.setDefault(Locale.US);
        double x = 3.2455;
        System.out.println(String.format("%.2f", x));

        //printando frase
        int idade;
        double salario;
        char genero;
        String nome;

        idade = 30;
        salario = 5800.5;
        genero = 'M';
        nome = "Max";

        System.out.println("o funcionario " + nome + ", de sexo " + genero + ", ganha "
         + String.format("%.2f", salario) + " e tem " + idade + " anos");
    }
}

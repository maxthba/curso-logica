import java.util.Scanner;
import java.util.Locale;

public class vetores {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        System.out.print("quantos valores voce quer digitar?: ");
        int N = sc.nextInt();

        double[] vet = new double[N];

        for(int i=0;i<N;i++){
            System.err.println("digite o valor do numero na posicao "+i+": ");
            vet[i] = sc.nextInt();
        }
        System.out.println("numeros digitados: ");
        for (int i=0;i<N;i++){
            System.err.println(String.format("%.1f", vet[i]));
        }
        sc.close();
    }
}

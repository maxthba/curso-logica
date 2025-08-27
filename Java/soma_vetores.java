import java.util.Scanner;

public class soma_vetores {
    public static void main(String[] arg){
        Scanner sc = new Scanner(System.in);
        int N;
        double soma = 0, media;
        System.out.print("digite quantos numeros deseja inserir no vetor : ");
        N = sc.nextInt();

        double[] vet = new double[N];

        for (int i=0;i<N;i++){
            System.out.print("digite o numero de posicao["+i+"]: ");
            vet[i] = sc.nextDouble();
            soma += vet[i];
        }
        media = soma/N;

        System.out.print("valores =");
        for (int i=0;i<N;i++){
            System.out.print(" "+vet[i]);
        }
        System.out.println("\nSoma = "+soma);
        System.out.println("Media = "+media);
        sc.close();
    }
    
}

import java.util.Scanner;
public class soma_vetores {
    public static void main(String[] arg){
        Scanner sc = new Scanner(System.in);

        int N;
        System.out.print("digite quantos numeros deseja inserir no vetor (maximo 10): ");
        N = sc.nextInt();

        while(N>10){
            System.out.print("digite um valor valido (maximo 10): ");
            N = sc.nextInt();
        }

        int[] vet = new int[N];

        for (int i=0;i<N;i++){
            System.out.print("digite o numero de posicao["+i+"]: ");
            vet[i] = sc.nextInt();
        }

        System.out.println("numeros negativos do vetor: ");
        for (int i=0;i<N;i++){
            if (vet[i]<0){
                System.out.println(vet[i]);
            }
        }
        sc.close();
    }
}
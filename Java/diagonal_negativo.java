import java.util.Scanner;
public class diagonal_negativo {
    public static void main(String[] arg){
        Scanner sc = new Scanner(System.in);

        int N, qnt_negativos = 0;
        System.out.print("digite o valor da matriz quadrada (maximo 10): ");
        N = sc.nextInt();

        while(N>10){
            System.out.print("digite um valor valido (maximo 10): ");
            N = sc.nextInt();
        }

        int[][] matriz = new int[N][N];

        for (int i=0;i<N;i++){
            for (int j=0;j<N;j++){
                System.out.print("Elemento ["+i+"]["+j+"]: ");
                matriz[i][j] = sc.nextInt();
                if (matriz[i][j]<0){
                    qnt_negativos +=1;
                }
            }
        }
        System.out.println("Diagonal principal");
        for (int i=0;i<N;i++){
            for (int j=0;j<N;j++){
                if(i==j){
                    System.out.print(" "+matriz[i][j]+" ");
                }
                else{
                    System.out.print("   ");
                }
            }
            System.out.println();
        }
        System.out.println("quantidade de numeros negativos: "+qnt_negativos);

        sc.close();
    }
}

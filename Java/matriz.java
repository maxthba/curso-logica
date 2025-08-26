import java.util.Scanner;

public class matriz {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int m, n;

        System.out.print("quantas linhas tera a matriz: ");
        m = sc.nextInt();
        System.out.print("quantas colunas vai ter a matriz: ");
        n = sc.nextInt();

        int[][] matriz = new int[m][n];

        for (int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                System.err.print("digite o valor que ficara na posicao ["+i+", "+j+"]: ");
                matriz[i][j] = sc.nextInt();
            }
        }
        System.out.println("\nmatriz digitada: ");

        for (int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                System.out.print(" "+matriz[i][j]+" ");
            }
            System.out.println();
        }

        sc.close();
    }

}

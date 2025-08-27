import java.util.Scanner;

public class soma_impares {
    public static void main(String[] arg){
        Scanner sc = new Scanner(System.in);

        int num1, num2, soma_impares=0;

        System.out.print("digite o valor do primeiro numero: ");
        num1 = sc.nextInt();
        System.out.print("digite o valor do segundo numero: ");
        num2 = sc.nextInt();

        for (int i = num1;i<num2;i++){
            if (i%2!=0){
                soma_impares +=i;
            }
        }
        System.out.println("soma dos valores impares: "+soma_impares);
        sc.close();
    }
}


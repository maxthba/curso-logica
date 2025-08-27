import java.util.Scanner;

public class Crescente {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int num1, num2;

        do{
            System.out.print("digite o primeiro numero: ");
            num1 = sc.nextInt();
            System.out.print("digite o segundo numero: ");
            num2 = sc.nextInt();

            if(num1>num2){
                System.out.println("Decrescente");
            }
            else{
                System.out.println("Crescente");
            }
        }
        while(num1 != 0 && num2 != 0);
        sc.close();
    }
}

import java.util.Scanner;

public class menor_que_tres {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int num1,num2,num3, menor;

        System.out.print("digite o primeiro numero: ");
        num1 = sc.nextInt();
        menor = num1;
        System.out.print("digite o segundo numero: ");
        num2 = sc.nextInt();
        if (menor>num2){
            menor = num2;
        }
        System.out.print("digite o terceiro numero: ");
        num3 = sc.nextInt();
        if (menor>num3){
            menor = num3;
        }

        System.out.println("Primeiro numero: "+num1+
        "\nSegundo numero: "+num2+
        "\nTerceiro numero: "+num3+
        "\nMenor: "+menor);
        sc.close();
    }
}

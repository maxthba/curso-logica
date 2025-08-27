import java.util.Scanner;
import java.util.Locale;

public class retangulo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Locale.setDefault(Locale.US);

        double base, altura, area, perimetro, diagonal;

        System.out.print("digite a base do retangulo: ");
        base = sc.nextDouble();

        System.out.print("digite a altura do retangulo: ");
        altura = sc.nextDouble();

        area = base*altura;
        perimetro = 2*base * 2*altura;
        diagonal = Math.sqrt(base*base + altura*altura);

        System.out.println("base: "+base+
        "\naltura: "+altura+
        "\narea: "+String.format("%.4f", area)+
        "\nperimetro: "+String.format("%.4f", perimetro)+
        "\ndiagonal: "+String.format("%.4f", diagonal) );
        
        sc.close();
    }
}

public class Main {
    public static void main(String[] args) {
        //operacoes comuns
        int x, y;
        x = 5;
        y = 2*x;
        System.out.println(x);
        System.out.println(y);

        //casting para double
        int a, b;
        double resultado;
        a = 5;
        b = 2;

        resultado = (double) a / b;

        System.out.println(resultado);

        double u;
        int j;
        u = 5.0;
        j = (int)u;

        System.out.println(u + "\n" + j);
    }
}

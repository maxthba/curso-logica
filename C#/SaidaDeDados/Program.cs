using System;
using System.Globalization;

namespace SaidaDeDados
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Bom Dia");
            Console.WriteLine("Boa Noite");
            Console.Write("Bom Dia");
            Console.WriteLine("Boa Noite");

            int x, y;
            x = 10;
            y = 20;

            Console.WriteLine(x);
            Console.WriteLine(y);

            double l;
            l = 2.3456;
            Console.WriteLine(l.ToString("F2", CultureInfo.InvariantCulture));

            int idade;
            double salario;
            string nome;
            char sexo;
            idade = 32;
            salario = 4560.9;
            nome = "Maria Silva";
            sexo = 'F';

            Console.WriteLine("A funcionaria " + nome + ", sexo " + sexo + ", ganha "
            + salario.ToString("F2", CultureInfo.InvariantCulture) +" e tem "+ idade +" anos");

        }
    }
}
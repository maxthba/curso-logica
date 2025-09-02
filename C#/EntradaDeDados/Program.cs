
using System;

namespace EntradaDeDados
{
    class Program
    {
        static void Main(string[] args)
        {
            double salario1, salario2;
            string nome1, nome2;
            int idade;
            char genero;

            Console.Write("Digite o nome da primeira pessoa: ");
            nome1 = Console.ReadLine();
            Console.Write("Digite o salario da primeira pessoa: ");
            salario1 = double.Parse(Console.ReadLine());

            Console.Write("Digite o nome da segunda pessoa: ");
            nome2 = Console.ReadLine();
            Console.Write("Digite o salario da segunda pessoa: ");
            salario2 = double.Parse(Console.ReadLine());

            Console.Write("Digite a idade: ");
            idade = int.Parse(Console.ReadLine());

            Console.Write("Digite o sexo: ");
            genero = char.Parse(Console.ReadLine());

            Console.WriteLine("Nome1 = " + nome1);
            Console.WriteLine("Salario1 = " + salario1);
            Console.WriteLine("Nome2 = " + nome2);
            Console.WriteLine("Salario2 = " + salario2);
            Console.WriteLine("Idade = " + idade);
            Console.WriteLine("Genero = " + genero);

        }
    }
}
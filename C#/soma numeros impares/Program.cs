using System;

namespace soma_numeros_impares
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int num1, num2, soma = 0;

            Console.Write("digite o comeco: ");
            num1 = int.Parse(Console.ReadLine());

            Console.Write("digite o fim: ");
            num2 = int.Parse(Console.ReadLine());   

            for (int i = num1; i < num2; i++)
            {
                if (i % 2 != 0)
                {
                    soma += i;
                }
            }

            Console.WriteLine("SOMA = "+soma);
        }
    }
}

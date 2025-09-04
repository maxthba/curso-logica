using System;

namespace crescente
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int num1, num2;
            Console.Write("Digite o primeiro numero: ");
            num1 = int.Parse(Console.ReadLine());

            Console.Write("Digite o segundo numero: ");
            num2 = int.Parse(Console.ReadLine());


            if (num1 < num2)
            {
                Console.WriteLine("decrescente!!");
            }
            else
            {
                Console.WriteLine("crescente!!");
            }
        }
    }
}

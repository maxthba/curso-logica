
using System;

namespace EstruturaDeControle
{
    class Program
    {
        static void Main(string[] args)
        {
            int hora;

            System.Console.Write("digite uma hora: ");
            hora = int.Parse(Console.ReadLine());

            if (hora < 12)
            {
                Console.WriteLine("Bom dia!!");
            }
            else if (hora >= 12 && hora < 18)
            {
                Console.WriteLine("Boa tarde!!");
            }
            else
            {
                Console.WriteLine("Boa noite!!");
            }

            int x, soma = 0;

            Console.WriteLine("Digite um numero: ");
            x = int.Parse(Console.ReadLine());

            while (x != 0)
            {
                soma += x;
                Console.WriteLine("Digite outro numero: ");
                x = int.Parse(Console.ReadLine());
            }
            Console.WriteLine("Soma = "+ soma);
        }
    }
}
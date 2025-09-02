
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
            else if (12 < hora && hora<18)
            {
                Console.WriteLine("Boa tarde!!");
            }
            else {
                Console.WriteLine("Boa noite!!");
            }
        }
    }
}
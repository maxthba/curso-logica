
using System;
using System.Globalization;

namespace TipoVariaveis
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;
            int N, i;

            Console.Write("digite quantos numeros deseja digitar: ");
            N = int.Parse(Console.ReadLine());

            double[] vet = new double[N];

            for (i = 0; i < N; i++)
            {
                Console.Write("digite o valor: ");
                vet[i] = double.Parse(Console.ReadLine(), CI);
            }

            Console.WriteLine();
            Console.WriteLine("Numeros Digitados: ");
            for (i = 0; i < N; i++)
            {
                Console.WriteLine(vet[i].ToString("F1", CI));
            }
        }
    }
}
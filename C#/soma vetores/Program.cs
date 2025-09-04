using System;

namespace soma_vetores
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int N, media, soma = 0;

            Console.Write("digite quantos numeros deseja digitar no vetor: ");
            N = int.Parse(Console.ReadLine());

            int[] vet = new int[N];

            for (int i = 0; i < N; i++)
            {
                Console.Write("Elemento["+i+"]: ");
                vet[i] = int.Parse(Console.ReadLine());
                soma += vet[i];
            }
            media = soma / N;
            Console.WriteLine("VALORES DIGITADOS: ");
            for (int i = 0; i < N; i++)
            {
                Console.Write(vet[i] + " ");
            }
            Console.WriteLine();
            Console.WriteLine("Soma: "+ soma);
            Console.WriteLine("Media: "+ media);
        }
    }
}

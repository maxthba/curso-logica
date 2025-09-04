using System;
using System.Globalization;

namespace matrizes
{
    internal class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int M, N;

            Console.Write("Digite o numero de linhas da matriz: ");
            M = int.Parse(Console.ReadLine());

            Console.Write("Digite o numero de colunas da matriz: ");
            N = int.Parse(Console.ReadLine());

            int[,] mat = new int[M, N];

            for (int i = 0; i<M; i++)
            {
                for(int j = 0; j<N; j++)
                {
                    Console.Write("Elemento[" + i + ", " + j + "]: ");
                    mat[i, j] = int.Parse(Console.ReadLine());

                }
            }

            Console.WriteLine();
            Console.WriteLine("MATRIZ DIGITADA: ");
            for(int i = 0; i < M; i++)
            {
                for (int j = 0; j<N; j++)
                {
                    Console.Write(mat[i, j] + " ");
                }
                Console.WriteLine();
            }
        }
    }
}

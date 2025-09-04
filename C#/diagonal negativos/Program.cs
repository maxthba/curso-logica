using System;

namespace diagonal_negativos
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int N, qnt=0;

            Console.Write("Digite a ordem da matriz : ");
            N = int.Parse(Console.ReadLine());

            int[,] mat = new int[N, N];

            for (int i=0; i<N; i++)
            {
                for(int j=0; j<N; j++)
                {
                    Console.Write("Elemento ["+i+", "+j+"]: ");
                    mat[i, j] = int.Parse(Console.ReadLine());
                    
                    if (mat[i, j] <= 0)
                    {
                        qnt++;
                    }
                }
            }

            Console.WriteLine("DIAGONAL PRINCIPAL: ");
            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < N; j++)
                {
                    if (i == j)
                    {
                        Console.WriteLine(mat[i, j]);
                    }
                }
            }
            Console.WriteLine("QUANTIDADE DE NEGATIVOS: " + qnt);
        }
    }
}
